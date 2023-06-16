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

	while (num1 < 100)
	{
		num2 = 0;
		while (num2 < 100)
		{
			if (num1 != num2 && num1 < num2)
			{
				putchar((num1 / 10) + 48);
				putchar((num1 % 10) + 48);
				putchar((' '));
				putchar((num2 / 10) + 48);
				putchar((num2 % 10) + 48);

				if (num1 != 98 || num2 != 99)
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
