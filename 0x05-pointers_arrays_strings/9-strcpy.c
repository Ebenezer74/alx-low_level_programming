#include "main.h"
#include <stdio.h>
/**
 * _strcpy - Copies a string by src.
 * @dest: char type string.
 * @src: char type string.
 * Description: Copies the string pointed to by pointer src
 * to by 'dest'.
 * Return: pointer to 'dest'
 */
char  *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	}	while (src[z] != '\0');

		return (dest);
}
