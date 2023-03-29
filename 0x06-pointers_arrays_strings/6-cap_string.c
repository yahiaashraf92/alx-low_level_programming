#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * string_toupper - returns the length of a string
 * @s: char array
 * Return: void
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] -= 32;
	}

	return (s);
}
