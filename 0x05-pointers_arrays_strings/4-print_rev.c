#include "main.h"
/**
*print_rev -  prints a string, in reverse
*@s: the string
*Return: void
*/
void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
	len++;
	}
	while (len--)
	{
	_putchar(s[len]);
	}
	_putchar('\n');
}
