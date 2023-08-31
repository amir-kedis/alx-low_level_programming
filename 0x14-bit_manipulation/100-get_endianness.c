#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	return (*c);
}

/* Endianness. The attribute of a system that indicates whether integers are */
/* represented with the most significant byte stored at the lowest */
/* address(big *endian) or */
/* at the highest address(little endian) */

/* To know if a system is big or little endian, we can check the first */
/* byte of an integer. If it is the most significant byte, the system is */
/* big endian. If it is the least significant byte, the system is little */
/* endian. */
