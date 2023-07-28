#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses an array
 * @a: array
 * @n: size of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp_el;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp_el = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp_el;
	}
}
