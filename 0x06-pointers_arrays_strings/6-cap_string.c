#include "main.h"
#include <stdio.h>

/**
*isLower - determines whether ascii is lowercase
*@c:string ascii
*Return: 1 if true, 0 if false
*/
int isLower(char c)
{
	return (c >= 97 && c <= 122);
}
/**
*isDelimiter - determines whether ascii is a delimiter
*@c:string ascii
*Return: 1 if true, 0 if false
*/
int isDelimiter(char c)
{
	int i;
	char delimiter[] = "\t\n,.!?\"(){}";

	for (i = 0 ; i < 12 ; i++)
	{
	if (c == delimiter[i])
		return (i);
	}
	return (0);
}

/**
**cap_string -capitalizes all words of a string
*@str: pointer to string
*Return: string
*/
char *cap_string(char *str)
{
	char *ptr = str;
	int foundDelimit = 1;

	while (*str)
	{
	if (isDelimiter(*str))
		foundDelimit = 1;
	else if (isLower(*str) && foundDelimit)
	{
		*str -= 32;
		foundDelimit = 0;
	}
	else
		foundDelimit = 0;
	str++;
	}
	return (ptr);
}
