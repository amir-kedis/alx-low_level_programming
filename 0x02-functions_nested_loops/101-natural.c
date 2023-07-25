#include <stdio.h>

/**
 * main - prints the sum mo of multiples of 3 or 5 in 1024
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int sum = 0;
	const int MULTIPLES_IN = 1024;

	for (i = 0; i < MULTIPLES_IN; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}
