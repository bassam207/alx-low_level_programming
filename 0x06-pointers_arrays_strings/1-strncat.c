#include "main.h"
/**
**_strncat -concatenates two strings
*@dest: first string
*@src: second string
*@n: number of characters of src
*Description: concatenates dest and src with specific src no
*Return:pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int d = 0;
	int s = 0;

	while (dest[d] != '\0')
	{
	d++;
	}
	for (s = 0 ; s < n && src[s] != '\0' ; s++)
	{
	dest[d + s] = src[s];
	}
	dest[d + s] = '\0';
	return (dest);
}
