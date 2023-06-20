#include "main.h"

#include <stdio.h>

/**
 * print_last_digit- entry point
 *
 * Description: Print numbers from 0 to 9
 *
 * @num: input for the function
 *
 * Return: always 0
*/

int print_last_digit(int num)
{
	int last;

	if (num < 0)
		last = (-1) * (num % 10);
	else
		last = num % 10;
	_putchar('0' + last);
	return (last);
}
