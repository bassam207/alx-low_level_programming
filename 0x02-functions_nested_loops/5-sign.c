#include "main.h"
/**
* print_sign - Prints the sign of a number
*
* @n: The number to check
*
* Description:
* This function takes an integer as input and checks its sign. It prints '+'
* if the number is positive, '-' if the number is negative, and '0' if the
* number is zero. It returns 1 for a positive number, -1 for a negative number,
* and 0 for zero.
*
* Return: 1 if @n is positive, -1 if @n is negative, 0 otherwise
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
		_putchar('0');
		return (0);
}
