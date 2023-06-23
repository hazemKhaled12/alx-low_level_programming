#include <stdio.h>

int main(void)
{
	long int num = 612852475143;
	long int largestFactor = 2;

	while (num > largestFactor)
	{
		if (num % largestFactor == 0)
		{
			num = num / largestFactor;
		}
		else
		{
			largestFactor++;
		}
	}
	printf("%ld\n", largestFactor);

	return (0);
}
