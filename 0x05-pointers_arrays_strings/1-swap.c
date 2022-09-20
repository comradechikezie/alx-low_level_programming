#include "main.h"

/**
 * swap_int - tswaps the values of two integers.
 * @a: this is the first entry
 * @b: this is the second entry
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int chik;

	chik = *a;
	*a = *b;
	*b = chik;
}
