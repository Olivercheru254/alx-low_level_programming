#include "main.h"

/**
 * _islower - entry point
 *@c: single letter input
 * Return: 1 lowercase, 0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
