#include "main.h"

void *full_path(char **tokens)
{
        char *path = get_pathtokens([0]);

        free(tokens[0]);
        tokens[0] = malloc(sizeof(path));

        strcpy(tokens[0], path);
        free(path);
}
