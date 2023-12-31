#include "main.h"

/**
 * prt_bin - print bin
 * @b: va_list
 * Return: length
 */
int prt_bin(va_list b)
{
	unsigned int num, p_ten, itr, n_arg, inc, nxt_val;
	unsigned int len = 0;

	/* init argument list */
	n_arg = va_arg(b, unsigned int);

	if (n_arg != 0)
	{
		num = n_arg;

		while (num != 0)
		{
			num /= 2;
			len++;
		}

		p_ten = 1;
		itr = 1;

		for (; itr <= len - 1; itr++)
		{
			inc = n_arg / p_ten;
			_putchar(inc + '0');

			nxt_val++;
			n_arg -= inc * p_ten;
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
