#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Print all single-digit numbers of base 10 starting from 0
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}

	printf("\n");
	return (0);
}
