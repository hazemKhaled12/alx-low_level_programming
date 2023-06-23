#include "main.h"

/**
 * more_numbers - entry point
 *
 * Description: Print numbers from 0 to 9
 *
 * Return: always 0
*/

void more_numbers(void)
{
	int num1 = 0;
	int num2

	while (num1 <= 10)
	{
		num2 = 0;
		while (num2 <= 14)
		{
			_putchar(num2 + '0');
			num2++;
		}
		putchar('\n');
		num1++;
	}
	putchar('\n');
}
