#include "main.h"

/**
 * jack_bauer - entry point
 *
 * Description: Print numbers from 0 to 9
 *
 * Return: always 0
*/

void jack_bauer(void)
{
	int hr = 0, min;

	while (hr <= 23)
	{
		min  = 0;

		while (min <= 59)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
			min++;
		}
		hr++;
	}


}

