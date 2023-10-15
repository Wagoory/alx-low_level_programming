#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char **environ;  // External array of environment variables

int custom_unsetenv(const char *name) {
	if (name == NULL || name[0] == '\0' || strchr(name, '=') != NULL) {
		return -1;  // Invalid argument
	}

	char **env = environ;
	char **env_next = env + 1;

	while (*env != NULL) {
		if (strncmp(*env, name, strlen(name)) == 0 && (*env)[strlen(name)] == '=') {
			// Found the variable, shift remaining variables down and free the memory
			free(*env);
			while (*env_next != NULL) {
				*env = *env_next;
				env++;
				env_next++;
			}
			*env = NULL;
			return 0;
		}
		env++;
		env_next++;
	}

	return 0;  // Variable not found
}

int main() {
	// Add an environment variable
	putenv("MY_VARIABLE=custom_value");

	// Print the environment variable
	char *value = getenv("MY_VARIABLE");
	if (value != NULL) {
		printf("MY_VARIABLE=%s\n", value);
	} else {
		printf("MY_VARIABLE not found in the environment.\n");
	}

	// Remove the environment variable
	custom_unsetenv("MY_VARIABLE");

	// Try to retrieve the environment variable again
	value = getenv("MY_VARIABLE");
	if (value != NULL) {
		printf("MY_VARIABLE=%s\n", value);
	} else {
		printf("MY_VARIABLE not found in the environment after unsetenv.\n");
	}

	return 0;
}

