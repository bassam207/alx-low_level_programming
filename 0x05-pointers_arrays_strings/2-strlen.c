#include "main.h"
/**
* _strlen - return length of string
*@s: the string
*Return: int value
*/
int _strlen(char *s)
{
	int len = 0;
	char str = *s;

	while (str[len] != '\0')
	{
	len++;
	}
	return (len);
}
