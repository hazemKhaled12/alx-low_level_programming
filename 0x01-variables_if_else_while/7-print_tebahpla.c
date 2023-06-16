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
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);	
}
