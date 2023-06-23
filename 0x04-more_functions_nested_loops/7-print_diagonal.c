#include "main.h"
/**
* print_diagonal - draws a diagonal line on the terminal
*
* @n: number of times the character \ should be printed
*
* Return: Always void
*/
void print_diagonal(int n)
{
	int row;
	int space;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (row = 0 ; row < n ; row++)
	{
	for (space = 0 ; space < row ; space++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}

}
