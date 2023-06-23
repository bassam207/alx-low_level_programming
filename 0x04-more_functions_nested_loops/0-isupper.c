#include "main.h"
/**
* _isupper - check the case of the letter if capital or small
*
* @c: the letter in ascii to be checked
*
* Return: 1 if c is uppercase , 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
