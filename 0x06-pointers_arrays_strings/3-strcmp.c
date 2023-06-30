#include "main.h"
/**
* _strcmp - compares two strings.
*@s1: first string
*@s2: second string
*Return: 0 if both same
* 1 if ascii of first is greater
* -1 if ascii of second is greater
*/
int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
	if (*s1 != *s2)
	{
	equal = ((int)*s1 - 48) - ((int)*s2 - 48);
	break;
	}
	s1++;
	s2++;
	}
	return (equal);
}
