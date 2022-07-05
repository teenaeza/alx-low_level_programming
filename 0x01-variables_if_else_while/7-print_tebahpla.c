#include <stdio.h>

/**
 * main - printing the numbers in reverse 
 * Return: 0 if it is executable
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}

	putchar(10);

return (0);
}
