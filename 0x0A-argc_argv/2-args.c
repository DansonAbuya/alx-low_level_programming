#include "main.h"
#include <stdio.h>

/**
  * main - Outputs all the args it receives
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int ag;

	for (ag = 0; ag < argc; ag++)
	{
		printf("%s\n", argv[ag]);
	}

	return (0);
}

