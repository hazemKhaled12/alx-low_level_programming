#include "main.h"

/**
 * print_alphabet_x10 - the function
 *
 * Description: Print numbers from 0 to 9
 *
 * Return: always 0
*/

void print_alphabet_x10(void)
{
	int ch;
	int counter = 1;

	while (counter < 11)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		counter++;
	}
}
