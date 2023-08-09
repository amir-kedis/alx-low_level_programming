#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string to get length of
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * is_palindrome_helper - checks if a string is a palindrome.
 * @s: string to check
 * @e: end of s
 * Return: 1 if s is a palindrome, otherwise 0
 */
int is_palindrome_helper(char *s, char *e)
{
	if (s >= e)
		return (1);
	if (*s != *e)
		return (0);
	return (is_palindrome_helper(s + 1, e - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: string to check
 * Return: 1 if s is a palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	return (is_palindrome_helper(s, s + _strlen_recursion(s) - 1));
}
