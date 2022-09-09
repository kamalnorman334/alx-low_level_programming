#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - Entr point prints a random number and states if poss, nega or zero
 *
 * Description: the program
 * if n > 0: possitive
 * if n < 0: negative
 * in n ==0: zero
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is possitive", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);

return (0);
}
