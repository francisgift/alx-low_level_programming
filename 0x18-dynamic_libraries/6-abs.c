#include "main.h"

/**
 *  _abs - function that computes the absolute value of an integer.
 *  @r: input to be checked
 *  Return: absolute value of r
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
		return (n);
	}
	else
		return (n);
}
