#include "main.h"

/**
*  _puts_recursion -  prints a string
*
*@s : string will be printed
*
*Return: void
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	}
	else
	{
	_putchar(*s);
	s++;
	_puts_recursion(s);
	}
}
