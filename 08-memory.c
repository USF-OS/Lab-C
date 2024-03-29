/**
 * This program tokenizes a string and prints each word in the string (separated
 * by a space character) on a new line. Unfortunately, it has two big issues.
 *
 * (1) Explain what's wrong with this code:
 *
 * (answer)
 *
 * (2) Fix the problem.
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *line = malloc(sizeof(char) * 49);
    strcpy(line, "Well, Grace she's gone, she's a half-written poem");

    while (true) {
        char *token = strsep(&line, " ");
        if (token == NULL) {
            break;
        }
        printf("%s\n", token);
    }

    free(line);

    return 0;
}

