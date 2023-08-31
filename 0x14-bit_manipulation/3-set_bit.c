#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: pointer to number to set bit in
 * @index: index of bit to set
 * Return: 1 if it worked or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 8 * sizeof(n))
		return (-1);

	*n |= 1 << index;
	return (1);
}

/*
 * shifting gets the 1 to the index of the bit you want to set and then ORing
 * with the number sets the bit to 1 if it was 0 and does nothing if it was 1
 */
