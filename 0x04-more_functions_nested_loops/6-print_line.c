#include "main.h"
/**
 * print_line - Draws a streight line in the terminal
 * @n: This rpresents the number of times the line character should be printed
 * Return: void
 */
void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
