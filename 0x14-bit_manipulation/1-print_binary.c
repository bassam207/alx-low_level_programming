#include "main.h"

/**
* print_binary - prints binary code of number
* @n: the number
* Return: void
*/
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8;
	int printed = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
