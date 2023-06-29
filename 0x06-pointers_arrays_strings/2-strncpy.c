#include "main.h"
/**
* *_strncpy - copies a string
*@dest: first string
*@src: second string
*@n: src characters no
*Description:  copies a string
*Return: pointer to src
*/
char *_strncpy(char *dest, char *src, int n)
{
	int d;

	for (d = 0 ; d < n && dest[d] != '\0' ; d++)
	{
	dest[d] = src[d];
	}
	while (d < n)
	{
	dest[d] = '\0';
	d++;
	}
	return (dest);

}
