#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strcmp - returns the length of a string
 * @s1: string
 * @s2: string
 * Return: the length of the string passed as input
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}

	return ((int)(s1[i] - s2[i]));
}
