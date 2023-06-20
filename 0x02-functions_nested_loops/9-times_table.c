#include "main.h"
/**
* times_table - Prints the multiplication table from 0 to 9.
*/
void times_table(void)
{
	int row;
	int column;

	for (row = 0; row <= 9; row++)
	{
	for (column = 0; column <= 9; column++)
	{
	int product = row * column;

	if (product < 10)
	{
	_putchar(' ');
	}
	_putchar(product / 10 + '0');
	_putchar(product % 10 + '0');
	if (column != 9)
	{
	_putchar(',');
	_putchar(' ');
	}
	}
	_putchar('\n');
	}
}
