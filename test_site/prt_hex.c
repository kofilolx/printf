#include "main.h"

/**
 * prt_Hexadecimal - print hexa
 * @p: points to int
 * @num: decimal
 */
void prt_Hexadecimal(unsigned int num, int *p)
{
	unsigned int r;

	if (num == 0)
		return;
	r = num % 16;

	prt_Hexadecimal(num / 16, p);

	if (r < 10)
		_putchar('0' + r);
	else
		_putchar('a' + r - 10);

	(void) (*p)++;
}

/**
 * prt_hex - print hex
 * @argList: va_list
 * Return: length of hexa
 */
int prt_hex(va_list argList)
{
	unsigned int n;
	int p = 0;

	n = va_arg(argList, unsigned int);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	prt_Hexadecimal(n, &p);
	return (p);
}
