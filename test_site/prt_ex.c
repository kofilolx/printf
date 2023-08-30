#include "main.h"

/**
 * prt_ex_str - print more string
 * @argList: va_list
 * Return: length
 */
int prt_ex_str(va_list argList)
{
	char *str;
	int i, check, len = 0;

	str = va_arg(argList, char *);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len += 2;
			check = str[i];

			if (check < 16)
			{
				_putchar('0');
				len++;
			}
			prt_Hexadecimal(check, &len);
		}
		else
		{
			_putchar(str[i]);
			len++;
		}
	}
	return (len);
}
