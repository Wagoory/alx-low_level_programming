#include "main.h"

void full_path(char **tokens)
{
        char *path = get_path(tokens[0]);
	size_t length;

        free(tokens[0]);
	length = strlen(path);

        tokens[0] = malloc((length + 1) * sizeof(char));

        strcpy(tokens[0], path);
}
