#include "main.h"
/**
*print_most_numbers - prints digits from 0-9 but 2,4
*
*Return: Always void
*/
void print_most_numbers(void)
{
	int i;

	for (i = 48 ; i <= 57 ; i++)
	{
	if (i == 50 || i == 52)
	{
	continue;
	}
	_putchar(i);
	}
	_putchar('\n');

}
