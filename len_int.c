#include "main.h"

/**
 * len_int - calculate length of int
 * @argList: from list of argument
 * Return:int
 */

int len_int(int argList)
{
	int len = 0;

	while (argList > 0)
	{
		argList /= 10;
		len++;
	}

	return (len);
}
