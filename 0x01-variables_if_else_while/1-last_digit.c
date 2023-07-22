#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - gets the last digit of a number
 *
 * Return: 0 always
*/
int main(void)
{
	int n;
	int last_digit_of_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit_of_n = n % 10;

	printf("Last digit of %d is %d", n, last_digit_of_n);

	if (last_digit_of_n > 5)
		printf(" and is greater than 5");
	else if (last_digit_of_n == 0)
		printf(" and is 0");
	else if (last_digit_of_n < 6 && last_digit_of_n != 0)
		printf(" and is less than 6 and not 0");

	printf("\n");

	return (0);
}
