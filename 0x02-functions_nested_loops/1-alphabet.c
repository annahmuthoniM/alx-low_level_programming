#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 */

void printf_alphebet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
