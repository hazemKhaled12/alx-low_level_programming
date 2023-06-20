#include "main.h"
#include <stdio.h>

/**
 * print_to_98  - entry point
 *
 * Description: Print numbers from 0 to 9
 *
 * @n: input for the function
 *
 * Return: always 0
*/

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	printf("\n");
}
