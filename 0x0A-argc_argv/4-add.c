#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program
 * @argc: number of args
 * @argv: array of args
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
		{
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		}
		sum += atoi(argv[argc]);
	}
        printf("%d\n", sum);
        return (0);
}
