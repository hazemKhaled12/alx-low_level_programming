#include "main.h"

#include <stdio.h>

/**
 * _isupper - entry point
 *
 * Description: Print numbers from 0 to 9
 *
 * @c: input for the function
 *
 * Return: returns 1 if right 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 'A' && c<= 'Z')
	{
		return (1);
	}
	return (0);
}
