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
		if (s[i - 1] == ' ' || s[i - 1] == ';'
		|| s[i - 1] == '.' || s[i - 1] == '!' ||
		s[i - 1] == '?' || s[i - 1] == '('
		|| s[i - 1] == ')' || s[i - 1] == '{'
		|| s[i - 1] == '}' || s[i - 1] == '\n'
		|| s[i - 1] == ',' || s[i - 1] == '\t')
			s[i] = toupper(s[i]);
		i++;
	}

	return (s);
}

