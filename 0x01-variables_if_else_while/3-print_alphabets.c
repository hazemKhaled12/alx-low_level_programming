#include <stdio.h>

/**
 * main -  prints the alphapet
 *
 * Description: this is a function to print the alphapet
 *
 * Return: the function always return (0)
*/

int main(void)
{
	char ch = 'a';
	char chCapital = 'A';

	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}

	while (chCapital <= 'Z')
	{
	       	putchar(chCapital);
	       	chCapital++;
	}

	putchar('\n');

	return (0);
}
