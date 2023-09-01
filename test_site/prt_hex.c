#include "main.h"

/**
 * prt_hex - Function that prints hexadecimals
 * @number: points to int
 * @useUppercase: letter case
 * Descriptions: prints hex with _putchar
 * Return: totalCount
 */
int prt_hex(unsigned int number, unsigned int useUpperCase)
{
	unsigned int digitCount, base;
	unsigned int i, digit, tempNumber;
	int totalCount = 0;
	char letterDifference = useUpperCase ? ('A' - ':') : ('a' - ':');

	if (number != 0)
	{
		tempNumber = number;
		digitCount = 0;

			/* Calculate the number of digits in hexadecimal representation */
		while (tempNumber != 0)
		{
			tempNumber /= 16;
			digitCount++;
		}

		base = 1;
		for (i = 1; i <= digitCount - 1; i++)
			base *= 16;
			/* Extract and print each digit of the hexadecimal number */
		for (i = 1; i <= digitCount; i++)
		{
			digit = number / base;
			if (digit < 10)
				_putchar(digit + '0');
			else
				_putchar(digit + '0' + letterDifference);
			totalCount++;
			number -= digit * base;
			base /= 16;
		}
	}
	else
	{
		/* Special case: number is 0 */
		_putchar('0');
		return (1);
	}

	return (totalCount);
}
/**
* prt_x - takes an unsigned int an prints it in lowercase hex
* @x: unsigned int to print
* Descriptions: prints in lowercase hex with _putchar
* Return: size of the output
*/
int prt_x(va_list x)
{
	return (prt_hex(va_arg(x, unsigned int), 0));
}
/**
* prt_X - takes an unsigned int an prints it in uppercase hex
* @X: unsigned int to print
* Descriptions: prints in uppercase hex with _putchar
* Return: size of the output
*/
int prt_X(va_list X)
{
	return (prt_hex(va_arg(X, unsigned int), 1));
}
