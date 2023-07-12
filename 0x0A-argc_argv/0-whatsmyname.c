#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the pr
 * @argc: number of arg
 * @argv: array of arg
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
