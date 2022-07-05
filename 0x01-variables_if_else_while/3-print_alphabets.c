#include <stdio.h>

/**
 * main - a program that prints uppercase and lowercase alphabets
 * Return: 0 if it is executable
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
		for (ch = 65; ch <= 90; ch++)
		{
			putchar(ch);
		}
		putchar(10)
			return (0);
	}
