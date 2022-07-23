#include <stdio.h>
/**
 * main - prints
 * @argc: no of args
 * @argv: array
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
