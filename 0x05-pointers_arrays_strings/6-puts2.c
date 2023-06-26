#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: The string to be treated
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int p = 0;

	while (str[0] != '\n')
	{
	p++;
	}
	for (i = 0; i < p; i += 2)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}