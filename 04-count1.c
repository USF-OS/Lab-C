/**
 * This program seems to print out different totals for the values in 'nums'
 * ...occasionally?
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
    int nums[1000];
    int total;

    int i;
    for (i = 0; i < 1000; ++i) {
        total += nums[i];
    }

    printf("The total is: %d\n", total);

    return 0;
}

