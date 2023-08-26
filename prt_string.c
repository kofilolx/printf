#include "main.h"


/**
 * prt_string - print string std
 * @argList: va_list variable
 * Return:void
 */

int prt_string(va_list argList)
{
	char *c;
	int len;

	c = va_arg(argList, char *);
	if (c == NULL)
		c = "(null)";
	len = 0;
	while (*c != '\0')
	{
		_putchar((unsigned char) *c);
		c++;

		len++;
	}
	return (len);

}
