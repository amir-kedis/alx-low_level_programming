#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the size of the triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int i = 0, j, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i < size)
	{
		j = size - 1;

		while (j > i)
		{
			_putchar(' ');
			j--;
		}

		k = 0;

		while (k <= i)
		{
			_putchar('#');
			k++;
		}

		_putchar('\n');
		i++;
	}
}
