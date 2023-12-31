#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print numbers from 0 to 9
 *
 * Return: always 0
*/

int main(void)
{
	int num1 = 0, num2;

	while (num1 < 10)
	{
		num2 = 0;
		while (num2 < 10)
		{
			if (num1 != num2 && num1 < num2)
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				if (num1 + num2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');

	return (0);
}
