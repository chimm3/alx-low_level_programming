#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char letters;

	while (count++ <= 9)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
			_putchar(letters);
		_putchar('\n');
	}

}
