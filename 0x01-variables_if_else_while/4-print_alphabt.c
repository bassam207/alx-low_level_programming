#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Print all the letters except q and e
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		else
		{
			putchar(n);
			n++;
		}
	}

	putchar('\n');
	return (0);
}

