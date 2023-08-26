#include "main.h"
/**
 * pnt_unsigned - print intgers
 * @n: number to be printed
 * Return: length of int
 */
int pnt_unsigned(unsigned int n)
{
	unsigned int digit, ncpy, rem, rev = 0;
	int len = 0, i = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	ncpy = n;

	while (ncpy > 0)
	{
		ncpy /= 10;
		len++;
	}
	while (n != 0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n /= 10;
	}
	while (rev > 0)
	{
		digit = rev % 10;
		_putchar (digit + '0');
		rev /= 10;
		i++;
	}
	while (i++ < len)
		_putchar('0');
	return (len);
}

/**
 * prt_unsigned - ...
 * @argList: va_list
 * Return: len of unsigned int
 */

int prt_unsigned(va_list argList)
{
	int len = 0;
	long x = va_arg(argList, long);
	char *negNum = "4288073002";

	if (x < 0)
	{
		while (*negNum != '\0')
		{
			_putchar(*negNum);
			negNum++;
			len++;
		}
	}
	else
	{
		unsigned int n = (unsigned int) x;

		len += pnt_unsigned(n);
	}
	return (len);
}
