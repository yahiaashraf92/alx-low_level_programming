#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * rev_string - returns the length of a string
 * @s: string
 * Return: the length of the string passed as input
 */
void rev_string(char *s)
{
	int j, i;
	char *temp;

	for (i = 0; s[i] != '\0'; i++)
	{}

	if (i > 0)
	{
		i--;
	}

	temp = (char *)malloc(i * sizeof(char));

	strcpy(temp, s);

	for (j = 0; j <= i; j++)
	{
		s[j] = temp[i - j];
	}

}
