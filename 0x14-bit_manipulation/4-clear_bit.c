#include "main.h"

/**
* clear_bit - clears bit at index
* @n: the bit
* @index: the index
* Return: 1, or -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
