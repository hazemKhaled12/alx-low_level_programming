#include "main.h"
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
	unsgined long fib1 = 1, fib2 = 2, sum = 0;
	int i = 2;

	printf("%lu, %lu", fib1, fib2);
	while (i < 98)
	{
		sum = fib1 + fib2;
		printf(", %lu", sum);
		fib1 = fib2;
		fib2 = sum;
		i++;
	}

	printf("\n");

	return (0);
}
