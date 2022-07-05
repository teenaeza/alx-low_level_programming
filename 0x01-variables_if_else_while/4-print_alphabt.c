#include <stdio.h>

/**
 * main - a program that prints the lowercase alphabets exceept q and e
 * Return: 0 if it is executable
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
	{
		putchar(ch);
	}
	}
	putchar(10);

	return (0);
}
