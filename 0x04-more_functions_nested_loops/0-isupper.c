#include "main.h"
/**
 * _isupper - Checks for upper case characters
 * @c: The charater to be checked
 * Return: 1 if character is upper case or 0 if otherwise
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
