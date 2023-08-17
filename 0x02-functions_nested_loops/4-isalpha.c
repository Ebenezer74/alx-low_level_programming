#include "main.h"
/**
 * _isalpha - This function checks for alphabetic characters
 * @c: The character to be checked
 * Return: 1 for upper and lower case letters or 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
