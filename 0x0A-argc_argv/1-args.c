#include <stdio.h>
/**
 * main - prints the program name followed by a newline
 * @argc: number of arguments
 * @argv: array of arguments given
 * Return: 0 Always
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
