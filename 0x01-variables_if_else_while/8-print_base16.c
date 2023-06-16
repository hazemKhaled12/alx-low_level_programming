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
	int num = 0;
	char ch = 'a';

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}

	while (ch < 'g')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
