#include "main.h"

/**
 * times_table - entry point
 *
 * Description: Print numbers from 0 to 9
 *
 * @n: number of timestable
 *
 * Return: always 0
*/

void print_times_table(int n)
{
	int table = 0;
	int num, prod;

	while (table <= n)
	{
		num = 0;
		while (num <= n)
		{
			prod = num * table;
			if (num != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (prod < 10)
					_putchar(' ');
			}
			if (prod < 10)
				_putchar((prod % 10) + '0');
			if (prod >= 10)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			if (num == 9)
				_putchar('\n');
			num++;
		}
		table++;
	}


}
