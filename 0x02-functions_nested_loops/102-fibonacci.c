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
	unsigned long long int;
	unsigned long long int fib[50] = {1, 2};

	printf("%llu, %llu", fib[0], fib[1]);

	i = 2;
	while (i < 50)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		printf(" ,%llu", fib[i]);
		i++;
	}
	printf("\n");
	return (0);
}
