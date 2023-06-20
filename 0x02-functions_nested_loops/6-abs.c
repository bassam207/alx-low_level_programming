#include "main.h"
/**
* _abs - Computes the absolute value of an integer
*
* @num: The number for which the absolute value is to be computed
*
* Description:
* This function takes an integer as input and computes its absolute value.
* If the number is negative, it returns the negation of the number, otherwis
* it returns the number as is. The absolute value of a number represents its
* magnitude without regard to its sign.
*
* Return: The absolute value of the input number
*/
int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
		return (num);
}
