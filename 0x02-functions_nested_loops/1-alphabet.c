#include "main.h"
/**
* print_alphabet - Prints lowercase alphabets from 'a' to 'z'
*
* Return: Always void
*/
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
