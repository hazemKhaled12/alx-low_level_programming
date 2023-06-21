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
	int sum = 0, num;

	while (num < 1024)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum = sum + num
		num++;
	}
	printf("%d\n", sum);

	return (0);
}

