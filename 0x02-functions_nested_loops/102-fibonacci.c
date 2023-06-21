#include "main.h"

#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print numbers from 0 to 9
 **
 * Return: always 0
*/

int main(void)
{
	int i;
	int fib[50] = {1, 2};

	printf("%d, %d", fib[0], fib[1]);

	i = 2;
	while (i < 50)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		printf(" ,%d", fib[i]);
	}
	printf("\n");
	return (0);
}
