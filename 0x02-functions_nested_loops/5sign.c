#include "main.h"

#include <stdio.h>

/**
 * print_sign - entry point
 *
 * Description: Print numbers from 0 to 9
 *
 * @n: input for the function
 *
 * Return: always 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}	
}
