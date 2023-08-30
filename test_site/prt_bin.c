#include "main.h"

/**
 * prt_bin - print bin
 * @b: va_list
 * Return: length
 */
int prt_bin(va_list b)
{
	unsigned int num, p_ten, itr, n, inc, nxt_val;
	int len = 0;

	/* init argument list */
	num = va_arg(b, unsigned int);

	if (num != 0)
	{
		num = n;

		while (num != 0)
		{
			num /= 0;
			len++;
		}

		p_ten = 1;
		itr = 1;

		for (; itr <= len; itr++)
		{
			inc = n / p_ten;
			_putchar(inc + '0');
			nxt_val;
			n -= inc * p_ten;
			p_ten /= 2;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}

	return (nxt_val);

}
