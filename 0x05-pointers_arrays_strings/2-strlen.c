#include "main.h"
/**
* _strlen - return length of string
*@s: the string
*Return: int value
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
	s++;
	len++;
	}
	return (len);
}
