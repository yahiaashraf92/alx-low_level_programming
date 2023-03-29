#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * leet - returns the length of a string
 * @s: char array
 * Return: char
 */

char *leet(char *s)
{
	int i, j;
	char enc[5] = {'4', '3', '0', '7', '1'};
	char dec[5] = {'a', 'e', 'o', 't', 'l'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (dec[j] == tolower(s[i]))
			{
				s[i] = enc[j];
				break;
			}
		}
	}
	return (s);
}
