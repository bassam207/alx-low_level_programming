#include <stdio.h>
/**
* main - Entry point of the program
*
* Description: prints the alphabet in lowercase, and then in uppercase
*
* Return: 0 (Success)
*/
int main(void)
{
	int n = 97;

	int a = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}

	while (a <= 90)
	{
		putchar(a);
		a++;
	}

	putchar('\n');




}

