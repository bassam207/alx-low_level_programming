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

	while (n <= 122)
	{
		putchar(n);
		n++;
	}

	int N = 65;

	while (N <= 90)
	{
		putchar(N);
		N++;
	}

	putchar('\n');




}

