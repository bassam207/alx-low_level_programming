#include "variadic_functions.h"

/**
* print_strings - prints strings
* @separator: separates strings from each others
* @n: nubmer of strings to print
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list nptr;

	if (!n)
	{
	printf("\n");
	return;
	}
	va_start(nptr, int);
	while (i--)
	{
	printf("%s%s", (str = va_arg(nptr, char*)) ? str : "(nil)",
			i ? (separator ? separator : "") : "\n");
	}
	va_end(nptr);

}
