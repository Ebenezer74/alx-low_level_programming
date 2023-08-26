#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: The first string
 * @s2: The second string
 * Return: Value less than 0 if first string is less than second string
 * nad value greater than 0 otherwise as well as value 0 if they
 * are equal
 */
int _strcmp(char *s1, char *s2)
{
	int counter, compare_value;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
	counter++;
	}
	compare_value = s1[counter] - s2[counter];
	return (compare_value);
}
