#include "main.h"

/**
 * _isalpha - entry point
 * @c: single letter input
 * Return: 1 functional, 0 not func
 */
int _isalpha(int c)
{
if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
return (1);
else
return (0);
}
