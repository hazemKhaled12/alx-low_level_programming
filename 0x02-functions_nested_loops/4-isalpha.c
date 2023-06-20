#include "main.h"

#include <stdio.h>

/**
 * _isalpha - entry point
 *
 * Description: Print numbers from 0 to 9
 *
 * @c: input for the function
 *
 * Return: always 0
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
