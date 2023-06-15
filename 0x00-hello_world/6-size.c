#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        
	long int b;
	char d;
	float f;
        int a;
	printf("char size is: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("int size is: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf(" long int size is: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("float size is: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
