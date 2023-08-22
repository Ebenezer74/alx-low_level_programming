#include "main.h"
/**
 * _strlen - Checks the length of a string.
 * @s: The string to be checked.
 * Return: 0 (success)
 */
int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}
