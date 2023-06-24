#include "main.h"
/**
*print_triangle - prints triangle
*
*@size: size of triangle
*
*Return : Always void
*/
void print_triangle(int size)
{
	int row;
	int space;
	int hash;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (row = 0 ; row < size ; row++)
	{
	for (space = size - row  ; space > 1 ; space--)
	{
	_putchar(32);
	}
	for (hash = 0 ; hash <= row ; hash++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}

