#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size parameter of triangle
 * Return: returns nothing
 */

void print_triangle(int size)
{
	int i = 0, j, n = size - 1;

	if (size > 0)
		_putchar('\n');

	else
		_putchar('\n');
	{
		for (; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
}
