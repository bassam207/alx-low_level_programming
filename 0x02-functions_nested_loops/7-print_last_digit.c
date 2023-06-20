#include "main.h"
/**
* print_last_digit - Prints the last digit of a number
* @num: The number to extract the last digit from
*
* Return: Always 0
*/
int print_last_digit(int num)
{
	int d = num % 10;
	
	if (d < 0)
	{
		 d = d * -1;
	}
	_putchar(d + '0');
	return (d);
}
