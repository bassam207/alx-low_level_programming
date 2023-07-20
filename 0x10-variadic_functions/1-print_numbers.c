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
	int i = n;
	va_list nptr;

	if (!n)
	{
	printf("\n");
	return;
	}
	va_start(nptr, n);
	while (i--)
	{
	printf("%d%s", va_arg(nptr, int), i ? (separator ? separator : "") : "\n");
	}
	va_end(nptr);
}
