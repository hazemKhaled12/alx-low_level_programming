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
	unsigned long fib1 = 0, fib2 = 1, sum = 0;
	unsigned long total;

	while (sum <= 4000000)
	{
		sum = fib1 + fib2;
		if ((sum % 2) == 0)
			total = total + sum;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%lu\n", total);

	return (0);
}
