#include "variadic_functions.h"

/**
* print_numbers - prints numbers of args
* @separator: separates numbers from each others
* @n: number of args
* @...: the numbers to print
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nptr;
	char str[100];
	unsigned int x;

	va_start(nptr, n);
	for (x = 0 ; x < n * 4 ; x += 4)
	{
	str[x] = '%';
	str[x + 1] = 'd';
	if (x < (n - 1) * 4)
	{
	str[x + 2] = *separator;
	str[x + 3] = ' ';
	}
	else
	{
	str[x + 2] = '\n';
	str[x + 3] = '\0';
	}
	}
	vprintf(str, nptr);
	va_end(nptr);
}
