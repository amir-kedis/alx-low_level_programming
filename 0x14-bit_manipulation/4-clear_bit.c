#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0
 * @n: pointer to number to set bit in
 * @index: index of bit to set
 * Return: 1 if it worked or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 8 * sizeof(n))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

/*
 * shifting gets the 0 to the index of the bit you want to set and then ANDing
 * with the number sets the bit to 0 if it was 1 and does nothing if it was 0
 */
