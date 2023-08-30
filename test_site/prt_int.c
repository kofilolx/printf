#include "main.h"

/**
 * int_blper - ...
 * @n: input integer
 * Return: len of number
 */

int int_blper(int n)
{
	int digit, ncpy, remainder, i = 0, len = 0, reverse = 0;

	ncpy = n;

	while (ncpy > 0)
	{
		ncpy /= 10;
		len++;
	}
	while (n != 0)
	{
		remainder = n % 10;
		reverse = reverse * 10 + remainder;
		n /= 10;
	}
	while (reverse > 0)
	{
		digit = reverse % 10;
		_putchar (digit + '0');
		reverse /= 10;
		i++;
	}
	while (i++ < len)
		_putchar('0');

	return (len);
}

/**
 * handle_int_min -print int min given
 * Return: len of INT_MAX
 */
int handle_int_min(void)
{
	char *my_int_min = "-2147483648";

		while (*my_int_min)
		{
			_putchar(*my_int_min);
			my_int_min++;
		}
		return (11);
}
/**
 * prt_int - print intgers
 * @argList: va_list
 * Return: length of int
 */
int prt_int(va_list argList)
{
	int n, len = 0, isNeg = 0;

	n = va_arg(argList, int);
	if (n == INT_MIN)
	{
		len += handle_int_min();
		return (len);
	}
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
		isNeg = 1;
	}
	len += int_blper(n);
	if (isNeg)
		len++;
	return (len);
}
