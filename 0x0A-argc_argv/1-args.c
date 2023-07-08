#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments
 * @argc: number of args
 * @argv: array of args
 *
 * Return: always 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
