#include <stdio.h>

/**
  * main - Outputs sum of multiples of 3 and 5 upto 1024
  *
  * Return: Always (Success)
  */
int main(void)
{
	int i, z = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			z += i;
		}

		i++;
	}

	printf("%d\n", z);
	return (0);
}
