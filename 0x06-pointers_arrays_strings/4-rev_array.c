#include "main.h"
/**
 * reverse_array - Transverses content of array of integers
 * @a: Pointer to array
 * @n: Number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp, counter;

	n = n - 1;
	counter = 0;
	while (counter < n)
	{
	temp = a[counter];
	a[counter++] = a[n];
	a[n--] = temp;
	}
}
