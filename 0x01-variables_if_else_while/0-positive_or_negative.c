#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
*main - Prints a random number if possitive, negative or zero
*return always 0 
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is possitive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
print("%d is zero\n", n);
return (0);
}
