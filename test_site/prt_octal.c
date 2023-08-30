#include "main.h"

/**
 * octal - print base 8
 * @num: decimal
 * @p: len of printed octal
 * Return: void
 */
void octal(unsigned int num, int *p)
{
	unsigned int r;

	if (num == 0)
		return;
	r = num % 8;

	octal(num / 8, p);

	_putchar('0' + r);
	(void)(*p)++;
}


/**
 * prt_octal - print base 8
 * @argList: va_list
 * Return: length of octal
 */
int prt_octal(va_list argList)
{
	unsigned int n;
	int p = 0;

	n = va_arg(argList, unsigned int);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	octal(n, &p);
	return (p);
}
