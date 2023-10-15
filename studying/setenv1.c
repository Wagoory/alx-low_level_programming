#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char **environ;  // External array of environment variables

int custom_setenv(const char *name, const char *value, int overwrite) {
	if (name == NULL || name[0] == '\0' || strchr(name, '=') != NULL || value == NULL) {
		return -1;  // Invalid arguments
	}

	// Calculate the length needed for the new environment variable entry
	int entry_len = strlen(name) + strlen(value) + 2;  // +2 for '=' and '\0'

	char **env = environ;
	while (*env != NULL) {
		if (strncmp(*env, name, strlen(name)) == 0 && (*env)[strlen(name)] == '=') {
			if (overwrite) {
				// Overwrite the existing variable
				free(*env);
				*env = (char *)malloc(entry_len);
				sprintf(*env, "%s=%s", name, value);
				return 0;
			} else {
				return 0;  // Variable exists, overwrite is false
			}
		}
		env++;
	}

	// Variable doesn't exist, create a new one
	*env = (char *)malloc(entry_len);
	sprintf(*env, "%s=%s", name, value);
	env[1] = NULL;  // Null-terminate the array

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

