#include "main.h"
/**
* *_strcat - concatenates two strings
*@dest: the first string
*@src: the second string
*Description:  appends the src string to the dest string
*Return: pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int destlen = 0;

	while (dest[destlen] != '\0')
	{
	destlen++;
	}

	int i = 0;

	while (src[i] != '\0')
	{
	des[destlen + i] = src[i];
	i++;
	}
	dest[destlen + i] = '\0';
	return (dest);
}
