#include "main.h"
/**
* times_table - Prints the multiplication table from 0 to 9.
*/
void times_table(void)
{
	int r;
	int c;

	for (r = 0; r <= 9; r++)
	{
	for (c = 0; c <= 9; c++)
	{
	int product = r * c;

	if (product < 10)
	{
	_putchar(' ');
	_putchar('0' + product);
	}
	else
	{
	_putchar(product / 10 + '0');
	_putchar(product % 10 + '0');
	}
	if (c != 9)
	{
	_putchar(',');
	_putchar(' ');
	}
	}
	_putchar('\n');
	}
}
