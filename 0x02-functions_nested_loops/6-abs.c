#include "main.h"

/**
	* _abs - computes the abs value of an int
	* @n: the given int
	*
	* Return: the abs of the input n
*/
int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	return (n);
}
