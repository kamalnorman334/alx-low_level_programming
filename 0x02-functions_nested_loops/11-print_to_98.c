#include"main.h"

/**
 * print_to_98 - print n to 98
 *
 * Desctriptiom: number is separated by comma followed by space
 *
 * last printed number is 98
 *
 * @n: input
 * return 0
*/

void print_to_98(int n)
{
if (n < 98)
{
for (n = n; n < 98; n++)
printf("%d, ", n);
printf("%d\n", 98);
}
else
{
for (n = n; n > 98; n--)
printf("%d, ", n);
printf("%d\n", 98);
}
}
