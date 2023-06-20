#include "main.h"
/**
* _isalpha - Checks if a character is an alphabetic character
*
* @c: The character to be checked
*
* Description:
* This function takes a character as input and checks if it is an alphabetic
* character. It returns 1 if the character is an alphabet (either lowercase
* or uppercase), and 0 otherwise.
*
* Return: 1 if @c is an alphabetic character, 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
		return (0);
}
