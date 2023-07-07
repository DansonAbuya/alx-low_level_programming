#include "main.h"
#include <stdio.h>

/**
  * main - Outputs the number of arguements passed
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: 0
  */
int main(int argc, char *argv[])
{
        (void) argv;
        printf("%s\n", argc -1);

        return (0);
}
