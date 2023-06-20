#include "main.h"

/**
 * print_alphabet - the function
 *
 * Description: Print numbers from 0 to 9
 *
 * Return: always 0
*/

void print_alphabet(void)
{
        int ch;

        for (ch = 'a'; ch <= 'z'; ch++)
        {
                _putchar(ch);
        }
        _putchar('\n');

