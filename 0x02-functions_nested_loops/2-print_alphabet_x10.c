#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times rhe alphabet, in the lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	f = 0;

	while (i < 10)
	{ 
		ch = 'a';
		while (i < 10)
		{ 
			_putchar(ch);
			ch++;
		}
		_putchar('/n');
		i++;
	}
}
