#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0)); /* Initialize random seed */
	n = rand() - RAND_MAX / 2; /* Generate a random number and assign it to n */

	int lastDigit; /* Declare a variable to store the last digit */
	lastDigit = n % 10; /* Calculate the last digit using modulo operator */

	printf("The string Last digit of %d is", n);

	if (lastDigit > 5)
	{
		printf(" greater than 5\n"); /* Print if the last digit is greater than 5 */
	}
	else if (lastDigit == 0)
	{
		printf(" 0\n"); /* Print if the last digit is 0 */
	}
	else
	{
		printf(" less than 6 and not 0\n"); /* Print if the last digit is less than 6 and not 0 */
	}

	return (0);
}

