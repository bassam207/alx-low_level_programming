#include <stdio.h>
/**
* main - Entry point of the program
*
* Description:prints the alphabet in lowercase
*
* Return: 0 (Success)
*/
int main(void)
{
	int n = 97;

	while (n < 122)
	{
		putchar(n);

		n++;
	}

	putchar('\n');

	return (0);
}
