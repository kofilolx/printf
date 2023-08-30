#include "main.h"
/**
  * prt_rot13 - encodes a string into rot13.
  * @R: string to convert
  * Return: size the output text
  */
int prt_rot13(va_list R)
{
	int j, itr, sum  = 0;
	char *r_arg;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLM nopqrstuvwxyzabcdefghijklm";


	r_arg = va_arg(R, char *);
	if (r_arg == NULL)
		r_arg = "(null)";
	for (j = 0; r_arg[j] != '\0'; j++)
	{
		for (i = 0; input[itr] != '\0'; itr++)
		{
			if (r_arg[j] == input[itr])
			{
				_putchar(output[itr]);
				sum++;
				break;
			}
		}
	}
	return (sum);

}
