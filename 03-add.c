/**
 * This program adds up the contents of an array.
 *
 * (1) Explain what's wrong with this code:
 *
 * (answer)
 *
 * (2) Fix the problem.
 */

#include <stdio.h>

int add(int arr[])
{
    int total = 0;
    int i;
    for (i = 0; i < sizeof(arr); ++i) {
        total += arr[i];
    }
    return total;
}

int main(void)
{
    int nums[] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };
    int result = add(nums);
    printf("Result: %d\n", result);

    return 0;
}

