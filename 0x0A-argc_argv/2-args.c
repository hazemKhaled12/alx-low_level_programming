#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the program
 * @argc: number of args
 * @argv: array of args
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
