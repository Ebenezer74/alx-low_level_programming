#include "main.h"
/**
 * _abs - This function prints the absolute value of a number
 * @c: This the number from which to print the absolute value
 * Return: c (success)
 */
int _abs(int c)
{
if (c < 0)
{
int abs_val;

abs_val = c * -1;
return (abs_val);
}
return (c);
}
