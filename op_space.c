include "main.h"

/**
 * op_space - handle plus and spaces after % sign
 * @c: the char after %
 * @n: number to be printed
 * Return: length of char
 */
int op_space(int c, int n)
{
	int l = 0;

	if (c == '+')
	{
		if (n > 0)
		{
			_putchar ('+');
			l++;
		}
	}
	else
	{
		putchar (' ');
		l++;
	}
	return (l);
}
