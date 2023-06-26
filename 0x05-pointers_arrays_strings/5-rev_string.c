#include "main.h"

/**
  * rev_string - Outputs the reverse of  a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int l = 0;

        while (s[l] != '\0')
        {
                l++;
        }

        for (l -= 1; l >= 0; l--)
        {
                _putchar(s[l]);
        }
}

