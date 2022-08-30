/**
 * This awesome code example was taken from the book 'Mastering C Pointers,'
 * one of the famously bad resources on learning C. It was trying to demonstrate
 * how to print 'BNGULAR'... with pointers...? Maybe?
 *
 * HINT: it is extremely bad practice to drop random ASCII values in your code.
 * There is a far better way to do it.
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
     char *a;
     a = "ANGULAR";
     *a = 66;
     printf("%s\n", a);
     return 0;
}
