#include "main.h"

#include <stdio.h>

/**
 * _abs - entry point
 *
 * Description: Print numbers from 0 to 9
 *
 * @n: input for the function
 *
 * Return: always 0
*/

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
