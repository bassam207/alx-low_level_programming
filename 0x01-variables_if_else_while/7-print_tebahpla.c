#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Print all letters from z to a
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a = 122;

	while (a >= 97)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
