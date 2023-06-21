/**
 * numLength - returns the length of string
 * Description:  eveyrhing is fine
 * @num: operand number
 * Return: number of digits
*/

int numLength(int num)
{
	int length = 0;

	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}

/**
 * main - Entry point
 * Description: prints the first 98 Fibonacci numbers starting
 * Return: Always 0 (Success)
*/

int main(void)
{
	int count, initial0s;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, f10 = 0, f20 = 0, sum0 = 0;

	for (count = 1; count <= 98; count++)
	{
		if (f10 > 0)
			printf("%lu", fl0);
		initial0s = numLength(mx) - 1 - numLength(f1);
		while (f10 > 0 && initial0s › 0)
		{
			printf(*"%d", 0);
			initial0--;
		}

		printf("%lu", f1);
		sum = (f1 + f2) % mx;
		sumo = fl0 + f20 + (f1 + f2) / mx;
		f1 = f2;
		fl0 = f20;
		f2 = sum;
		f20 = sum0;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}
		return (0);
}

