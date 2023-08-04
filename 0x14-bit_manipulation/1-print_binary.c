#include "main.h"

/**
* print_binary - prints binary code of number
* @n: the number
* Return: void
*/
void print_binary(unsigned long int n)
{
	int bit = sizeof(unsigned long int) * 8;
	int i;
	unsigned long int mask;

	for (i = bit - 1; i >= 0; i--)
	{
		mask = 1UL << i;

		if ((n & mask) == mask)
			_putchar('1');
		_putchar('0');
	}
}
