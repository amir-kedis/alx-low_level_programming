#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: smallest integer in array
 * @max: largest integer in array
 *
 * Return: pointer to new array
 *         NULL if malloc fails or min > max
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(arr + i) = min + i;

	return (arr);
}
