#include "main.h"
/**
 * print_alphabet_x10 - This function prints alphabets ten times
 * Return: void (success)
 */
void print_alphabet_x10(void)
{
char ch;
int i;

i = 0;
while (i < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
i++;
}
}
