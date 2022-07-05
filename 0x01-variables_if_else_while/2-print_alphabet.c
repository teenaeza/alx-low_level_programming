#include <stdio.h>

/**
 * main - write a program that prints the alphabets in lowercase
 * Return: 0 if it is executable
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	putchar(10); /*this is an ascii code for new line*/
	return (0);
}
