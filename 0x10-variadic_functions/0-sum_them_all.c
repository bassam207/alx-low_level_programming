#include "variadic_functions.h"

/**
* sum_them_all - sum variable args
*
* @n: the number of args
*
* @...: the integers to sum
*
* Return: the integer sum
*/



int sum_them_all(const unsigned int n, ...)
{
	int s = 0;
	int i = n;

	va_list nptr;

	if (!n)
	{
	return (0);
	}
	va_start(nptr, n);
	while (i--)
	{
	s += va_arg(nptr, int);
	}
	va_end(nptr);
	return (s);

}
