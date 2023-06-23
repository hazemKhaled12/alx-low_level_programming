#include "main.h"

/**
 * print_line - entry point
 *
 * Description: Print numbers from 0 to 9
 *
 * @n: paramateter for the function
 *
 * Return: always 0
*/

void print_line(int n)
{
	int start = 0;

	if (n > 0)
	{
		while (start <= n)
		{
			_putchar('_');
			start++;
		}
	}
	_putchar('\n');
}
