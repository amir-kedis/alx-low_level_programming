#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix of
 * integers.
 * @a: pointer to the start of 2d array
 * @size: Size of the array.
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;
	int *temp_ptr;

	for (i = 0; i < size; i++)
	{
		temp_ptr = (a + i * size + i);
		sum1 += *temp_ptr;
	}
	for (j = 0; j < size; j++)
	{
		temp_ptr = (a + j * size + (size - 1 - j));
		sum2 += *temp_ptr;
	}

	printf("%d, %d\n", sum1, sum2);
}
