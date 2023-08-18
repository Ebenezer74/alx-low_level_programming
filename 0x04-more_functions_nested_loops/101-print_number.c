#include "main.h"
/**
 * print_number - Prints an integer on terminal
 * @n: input integer parameter
 * Description: This function prints integer values
 * Return: 0
 */
void print_number(int n)
{
unsigned int i = n;

if (n < 0)
{
_putchar(45);
i = -i;
}
if (i / 10)
{
print_number(i / 10);
}
_putchar(i % 10 + '0');
}
