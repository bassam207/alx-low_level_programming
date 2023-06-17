#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Print all possible combinations of single-digit numbers using
 *              putchar and separate them by ", ".
 *
 * Return: (0) Success
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);

		if (n == 57)
			continue;

		putchar(',');
		putchar('\t');
	}

	putchar('\n');

	return (0);
}
