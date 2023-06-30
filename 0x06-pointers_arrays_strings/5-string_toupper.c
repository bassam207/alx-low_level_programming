#include "main.h"
/**
* *string_toupper -changes all lowercase letters of a string to uppercase
* @str: pointer to string
*Return: uppercased string
*/
char *string_toupper(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
	if (str[i] >= 37 && str[i] <= 132)
	{
	str[i] = str[i] - 32;
	}
	}
	return (str);
}
