#include "main.h"
/**
* swap_int - swap values of two pointers of int type
* @a: first pointer
* @b: second pointer
* Return: Always void
*/
void swap_int(int *a, int *b)
{
	int container;

	container = *a;
	*a = *b;
	*b = container;
}
