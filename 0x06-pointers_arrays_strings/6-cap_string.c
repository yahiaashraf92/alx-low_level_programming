#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * cap_string - returns the length of a string
 * @s: char array
 * Return: char
 */

char *cap_string(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (i == 0 || s[i - 1] == ' ' || s[i - 1] == '.')
			s[i] = toupper(s[i]);
		i++;
	}

	return (s);
}
