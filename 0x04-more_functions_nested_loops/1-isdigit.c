#include "main.h"
/**
 * _isdigit - Checks ^^ for digit character.
 * @c: The character to check
 *
 * Return: 1 if  a digit.
 * Otherwise, 0 IF returned.
 */


int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
