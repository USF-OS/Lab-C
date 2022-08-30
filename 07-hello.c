/**
 * This program tries to print a nice greeting but doesn't quite get there.
 *
 * (1) Explain what's wrong with this code:
 *
 * (answer)
 *
 * (2) Fix the problem.
 */

#include <stdio.h>

int main(void)
{
    char word1[4];
    word1[0] = 'H';
    word1[1] = 'e';
    word1[2] = 'l';
    word1[3] = 'l';
    word1[4] = 'o';

    char word2[] = "World";

    printf("%s\n", word1);
    printf("%s\n", word2);

    return 0;
}

