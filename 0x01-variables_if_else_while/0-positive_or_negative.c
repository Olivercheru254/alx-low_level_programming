#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assignation
 * if grater than 0: positive, if 0: zero
 * if less than 0: negative, followed by new line
 * Return: 0
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}
