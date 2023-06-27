#include "main.h"
/**
*puts2 -prints every other character of a string
*starting with the first character
*@str: the string
*return: void
*/
void puts2(char *str)
{	
	int count = 0;

	while (*str != '\0')
	{
	if (count % 2 == 0)
	{
	_putchar(*str + 0);
	}
	str++;
	count++;
	}
	_putchar('\n');
}
