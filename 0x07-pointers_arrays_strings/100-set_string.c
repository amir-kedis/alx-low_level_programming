#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to pointer to be set.
 * @to: Pointer to set *s to.
 */
void set_string(char **s, char *to)
{
	/* set the pointer that s points to to the same pointer that to have */
	*s = to;
}
