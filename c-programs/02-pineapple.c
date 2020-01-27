/**
 * This program features an amazing function that appends "Pineapple" to any
 * string it is given. Wow. The only issue is that it doesn't actually work, and
 * it also doesn't really follow idiomatic C conventions when it comes to
 * returning the result string.
 *
 * (1) Explain what's wrong with this code:
 *
 * (answer)
 *
 * (2) Fix the problem.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *pineapple(char *input) {
    char buf[128];
    strcpy(buf, input);
    strcat(buf, "Pineapple");
    return buf;
}

int main(void)
{
    char *str = "Pen";
    char *result = pineapple(str);
    printf("%s\n", result);

    return 0;
}

