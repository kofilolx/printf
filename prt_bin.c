#include "main.h"

/**
 * bin_n - recrertion fun convert dec to bin
 * @num: number
 * @len_pt: len
 * Return: void
 */
void bin_n(unsigned int num, int *len_pt)
{
	if (num <= 0)
		return;
	bin_n(num / 2, len_pt);
	_putchar((num % 2) + '0');

	(void)(*len_pt)++;
}

/**
 * prt_bin - print bin
 * @argList: va_list
 * Return: length
 */
int prt_bin(va_list argList)
{
	unsigned int num;
	int len = 0;

	num = va_arg(argList, unsigned int);
	if (num == 0 || num == 1)
	{
		_putchar('0' + num);
		return (1);
	}
	bin_n(num, &len);

	return (len);

}
