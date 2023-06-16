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
	while(ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
