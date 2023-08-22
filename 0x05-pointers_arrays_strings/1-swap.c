#include "main.h"
/**
 * swap_int - Takes two integers variables and swaps them.
 * @a: swaps and stores the address of variable a.
 * @b: swaps and stores the address of variable b.
 * Return: 0 (success)
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *b;
	*b = *a;
	*a = swap;
}
