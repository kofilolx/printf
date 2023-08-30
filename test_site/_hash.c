#include "main.h"

/**
 * _hash - handle character after hash sign
 * @c: the char after #
 * @i: pointer to current char
 * Return: length of char
 */

int _hash(char c, int *i)
{
	int l = 0;

	if (c == 'x' || c == 'X')
	{
		_putchar('0');
		_putchar('x');

		l += 2;
		(*i)++;
	}
	else if (c == 'o')
	{
		_putchar('0');
		l++;
		(*i)++;
	}

	return (l);
}
