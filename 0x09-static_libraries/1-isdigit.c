#include "main.h"

#include <stdio.h>

/**
 *  _isdigit - entry point
 *
 * Description: Print numbers from 0 to 9
 *
 * @c: input for the function
 *
 * Return: always 0
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
