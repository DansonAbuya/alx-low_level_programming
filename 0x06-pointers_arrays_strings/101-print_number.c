#include "main.h"

/**
  * print_number: Outputs  integers with putchar
  * @n: Number to be output
  *
  * Return: 0
  */
void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	m = n;

	if (m/ 10)
		print_number(m / 10);

	_putchar(m % 10 + '0');
}
