#include "main.h"
/**
* print_square -  prints a square
*
* @size:  size of the square
*
* Return: Always void
*/
void print_square(int size)
{
	int row;
	int hash;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (row = 0 ; row < size ; row++)
	{
	for (hash = 0 ; hash < size ; hash++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}

}
