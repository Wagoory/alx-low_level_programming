#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char **environ;  // External array of environment variables

int custom_setenv(const char *name, const char *value, int overwrite) {
	if (name == NULL || name[0] == '\0' || strchr(name, '=') != NULL || value == NULL) {
		return -1;  // Invalid arguments
	}

	char **env = environ;
	char *new_entry = NULL;

	while (*env != NULL) {
		if (strncmp(*env, name, strlen(name)) == 0 && (*env)[strlen(name)] == '=') {
			if (overwrite) {
				// Allocate memory for the new entry
				new_entry = (char *)malloc(strlen(name) + strlen(value) + 2);
				sprintf(new_entry, "%s=%s", name, value);

				// Free the old environment variable entry
				free(*env);

				// Replace the old entry with the new entry
				*env = new_entry;
				return 0;
			} else {
				return 0;  // Variable exists, overwrite is false
			}
		}
		env++;
	}

	// Variable doesn't exist, create a new one
	new_entry = (char *)malloc(strlen(name) + strlen(value) + 2);
	sprintf(new_entry, "%s=%s", name, value);

	// Count the number of environment variables
	int env_count = 0;
	while (environ[env_count] != NULL) {
		env_count++;
	}

	// Resize the environment variable array
	environ = (char **)realloc(environ, (env_count + 2) * sizeof(char *));
	environ[env_count] = new_entry;
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

