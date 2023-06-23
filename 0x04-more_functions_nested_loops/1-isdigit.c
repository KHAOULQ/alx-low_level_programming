#include "main.h"


/**
 * _isupper - checks Write a function that checks for uppercase character.
 * @c: character to check
 *
 * Return: gives 1 or 0
 */
int _isupper(int c)
{
        if (c >= 48 && c <= 57)
                return (1);

        return (0);
}
