#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, len1;
	char *ptr;

	i = 0, len1 = 0;
	while (s1[i] != '\0')
	{
		len1++;
		i++
	}

	ptr = (char *)malloc((len1 + n) * sizeof(char));

	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}

	i = 0;
	while (i < n && s2[i] != '\0')
	{
		ptr[i + len1 - 1] = s2[i];
		i++;
	}

	ptr[i + len1] = '\0';

	return (ptr);
}
