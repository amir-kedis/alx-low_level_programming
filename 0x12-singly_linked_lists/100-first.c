#include <stdio.h>

/**
 * constructor - prints a message before main function is executed.
 */
void constructor(void) __attribute__((constructor));

/**
 * constructor - prints a message before main function is executed.
 */
void constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
