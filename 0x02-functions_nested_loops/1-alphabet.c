#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lower case
 *
 * Return: always 0 (success)
 */
void print_alphabet(void)
{
	int c;
       
	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
