#include "main.h"

/**
 * _islower - the function
 *
 * Description: Print numbers from 0 to 9
 *
 * @c: checks input of the function
 *
 * Return: always 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
