#include "main.h"

/**
 * print_most_numbers - entry point
 *
 * Description: Print numbers from 0 to 9
 *
 * Return: always 0
*/

void print_most_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}
