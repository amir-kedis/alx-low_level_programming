#include "main.h"
#include <stdlib.h>

/**
* print_last_digit - prints and returns the last digit of an int
* @n: the input int
*
* Return: the last digit of the int
*/
int print_last_digit(int n)
{
	int lastDigit = abs(n % 10);

	_putchar(lastDigit + '0');
	return (lastDigit);
}
