#include "main.h"
/**
*puts2 -prints every other character of a string
*starting with the first character
*@str: the string
*return: void
*/
void puts2(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str + 0);
	str += 2;
	}
	_putchar('\n');
}
