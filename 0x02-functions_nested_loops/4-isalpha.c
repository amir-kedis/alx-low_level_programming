#include "main.h"

/**
 * _isalpha - checks if a char is lower or uper case english later
 *
 * @c: the char that will be tested
 *
 * Return: 1 if alphapetical later - 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
