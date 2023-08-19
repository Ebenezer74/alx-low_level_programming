#include "main.h"
/**
 * positive_or_negative - A function that checks the state of a number
 * @i: The number to be checked
 * Return: 0 (Success)
 */
void positive_or_negative(int i)
{
if (i < 0)
{
printf("%d is %s\n", i, "negative");
}
else if (i > 0)
{
printf("%d is %s\n", i, "positive");
}
else
{
printf("%d is %s\n", i, "zero");
}
return;
}
