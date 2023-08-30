#include "main.h"

/**
 * rev_string - reverse str
 * @argList:va_list
 * Return:len
 */
int rev_string(va_list argList)
{
	int len, i;
	char *str;
	char *ptr;

	len = 0;
	str = va_arg(argList, char *);
	ptr = str;
	if (!str)
	{
		str = "(null)";
		for (i = 0; i < 6; i++)
			_putchar(str[i]);
		return (0);
	}
	while (*str)
	{
		len++;
		str++;
	}
	for (i = len - 1; i >= 0; i--)
		_putchar(ptr[i]);
	return (len);
}
