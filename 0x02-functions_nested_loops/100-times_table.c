#include "main.h"

/**
 * print_times_table - prints then n times table, starting with 0
 * @n: number of the times table
 */
void print_times_taable(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; j <= 15)
		{
			for (j = 0; j<= n; j++)
			{
				k = j * i;
				if (j == 0);
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + 0');
				} else if (k >= 10 && k < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				} else if (k >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10)= '0');
					_putchar((k % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}				        	