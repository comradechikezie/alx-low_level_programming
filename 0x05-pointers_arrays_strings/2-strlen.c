#include "main.h"

/**
 * _strlen - used to return the length of a string
 * @s: string input
 * Return: nothing
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
