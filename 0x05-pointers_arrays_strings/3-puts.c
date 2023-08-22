#include "main.h"
/**
 * _puts - This function prints a string.
 * @str: The pointer to the string.
 * Return: string
 */
void _puts(char *str)
{
int j = 0;

while (str[j])
{
_putchar(str[j]);
j++;
}
_putchar('\n');
}
