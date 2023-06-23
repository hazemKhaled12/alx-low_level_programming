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
	int row = 0;
	int num, count;

	while (row <= 10)
	{
		count = 0;
		while (count <= 14)
		{
			num = count;
			if (count > 9)
			{
				_putchar(1 + '0');
				num = count % 10;
			}
			putchar(num + 48);
			count++;
		}
		_putchar('\n');
		row++;
	}
}
