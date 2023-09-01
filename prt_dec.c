#include "main.h"
/**
* prt_dec - function that prints an decimal
* @d: integer to print
* Descriptions: prints digit with _putchar
* Return: size the output text
*/
int prt_dec(va_list d)
{
        int len, powten, itr, digit, n_arg, read = 0, num;
	itr = 1;

        n_arg = va_arg(d, int);
        if (n_arg != 0)
        {
                if (n_arg < 0)
                {
                        _putchar('-');
                        read++;
                }
                num = n_arg;
                len = 0;
                while (num != 0)
                {
                        num /= 10;
                        len++;
                }
                powten = 1;
                for (; itr <= len - 1; itr++)
                        powten *= 10;
                for (itr = 1; itr <= len; itr++)
                {
                        digit = n_arg / powten;
                        if (n_arg < 0)
                                _putchar((digit * -1) + 48);
                        else
                                _putchar(digit + '0');
                        read++;
                        n_arg -= digit * powten;
                        powten /= 10;
                }
        }
        else
        {
                _putchar('0');
                return (1);
        }
        return (read);
}
