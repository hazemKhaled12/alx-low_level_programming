#include "main.h"

/**
 * times_table - entry point
 *
 * Description: Print numbers from 0 to 9
 *
 * Return: always 0
*/

void times_table(void)
{
	int table = 0;
	int num, prod;

	while (table < 10)
	{
		num = 0;
		while (num < 10)
		{
			prod = num * table;
			if (prod < 10)
				_putchar((prod % 10) + '0');
			if (prod >= 10)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			if (num != 9)
			{
				_putchar(',');
				_putchar(' ');
				if (prod < 10)
					_putchar(' ');
			}
			if (num == 9)
				_putchar('\n');
			num++;
		}
		table++;
	}


}
