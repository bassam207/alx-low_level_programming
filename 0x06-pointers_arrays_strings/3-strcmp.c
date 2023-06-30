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
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
	if (s1[i] == s2[i])
	{
	i++;
	}
	else if (s1[i] > s2[i])
	{
		return (1);
	}
	else
	{
		return (-1);
	}
	}
	if (s1[i] == '\0' && s2[i] == '\0')
	{
	return (0);
	}
	else if (s1[i] == '\0')
	{
	return (-1);
	}
	else
	{
	return (1);
	}

}
