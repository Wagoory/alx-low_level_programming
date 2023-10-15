#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char **environ;  // External array of environment variables

int custom_setenv(const char *name, const char *value, int overwrite) {
	if (name == NULL || name[0] == '\0' || strchr(name, '=') != NULL || value == NULL) {
		return -1;  // Invalid arguments
	}

	char **env = environ;

	while (*env != NULL) {
		if (strncmp(*env, name, strlen(name)) == 0 && (*env)[strlen(name)] == '=') {
			if (overwrite) {
				// Free the old environment variable entry
				free(*env);

				// Allocate memory for the new entry
				*env = (char *)malloc(strlen(name) + strlen(value) + 2);
				sprintf(*env, "%s=%s", name, value);
				return 0;
			} else {
				return 0;  // Variable exists, overwrite is false
			}
		}
		env++;
	}

	// Variable doesn't exist, create a new one
	int env_count = 0;
	while (environ[env_count] != NULL) {
		env_count++;
	}

	// Allocate memory for the new environment variable entry
	environ = (char **)realloc(environ, (env_count + 2) * sizeof(char *));
	environ[env_count] = (char *)malloc(strlen(name) + strlen(value) + 2);
	sprintf(environ[env_count], "%s=%s", name, value);
	environ[env_count + 1] = NULL;

	return 0;
}

int main() {
	// Add a new environment variable
	custom_setenv("MY_VARIABLE", "custom_value", 1); // Overwrite if it exists

	// Print the new environment variable
	char *value = getenv("MY_VARIABLE");
	if (value != NULL) {
		printf("MY_VARIABLE=%s\n", value);
	} else {
		printf("MY_VARIABLE not found in the environment.\n");
	}

	return 0;
}

