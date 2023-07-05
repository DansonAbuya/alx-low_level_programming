#include "main.h"

/**
 * factorial: function that outputs the factorial of n
 * @n : the number to output it's factorial
 *
 * Return : an integer
 */
int factorial(int n)
{
	if(n<0)
	{
		return -1;
	}
	else if(n==0)
	{
		return 0;
	}
	else
	{
		return n*(n-1)!;
	}
}
