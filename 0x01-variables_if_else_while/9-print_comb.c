#include <stdio.h>

/**
  * main - Outputs all possible combinations of a single digit number
  *
  * Return: Always (Success);
  */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);

		if (nuim != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

