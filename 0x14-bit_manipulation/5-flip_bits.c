#include "main.h"

/**
* flip_bits-number of bits to flibs to numbers
* @n: first num
* @m: second num
* Return: number of bits to flib to convert number
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorv = n ^ m;
	unsigned int count = 0;

	while (xorv)
	{
		if (xorv & 1UL)
			count++;
		xorv = xorv >> 1;
	}
	return (count);
}
