#include "main.h"
/**
 * _strlen - return the length of string
 * @str: the string
 *
 * Return: length
*/
int _strlen(char *str)
{
	int length;

	for (length = 0; str[length] != 0; length++)
		;
		return (length);
}
/**
 * specifier - check if the character = %
 * @c: the character to check
 *
 * Return: 1 on success and 0 on fail
*/
int specifier(char c)
{
	if (c == '%')
		return (1);
	return (0);
}
