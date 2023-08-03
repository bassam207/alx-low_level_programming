#include "main.h"
#include <unistd.h>

/**
* _putchar - writes character c to stdout
* @c: character
* Return: 1(success), -1(failed)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
