#include "main.h"
/**
 * print_rev - Function prints astring in reverse.
 * @s: The reference pointer of checked string.
 * Return: 0
 */
void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
