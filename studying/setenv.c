#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int custom_setenv(const char *name, const char *value, int overwrite) {
	if (name == NULL || name[0] == '\0' || strchr(name, '=') != NULL || value == NULL) {
		return -1; // Invalid arguments
	}

	// Search for the environment variable in the current environment
	char **envp = environ;
	while (*envp != NULL) {
		if (strncmp(*envp, name, strlen(name)) == 0 && (*envp)[strlen(name)] == '=') {
			if (overwrite) {
				// Overwrite the existing variable
				char *env_entry = (char *)malloc(strlen(name) + strlen(value) + 2);
				sprintf(env_entry, "%s=%s", name, value);
				*envp = env_entry;
				return 0;
			} else {
				return 0; // Variable exists, overwrite is false
			}
		}
		envp++;
	}

	// Variable doesn't exist, create a new one
	char *env_entry = (char *)malloc(strlen(name) + strlen(value) + 2);
	sprintf(env_entry, "%s=%s", name, value);

	// Count the number of environment variables
	int env_count = 0;
	while (environ[env_count] != NULL) {
		env_count++;
	}

	// Resize the environment variable array
	environ = (char **)realloc(environ, (env_count + 2) * sizeof(char *));
	environ[env_count] = env_entry;
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

