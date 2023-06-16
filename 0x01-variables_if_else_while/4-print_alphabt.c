#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print alphapet except q and e
 *
 * Return: always 0
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}

