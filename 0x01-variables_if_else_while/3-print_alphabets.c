#include <stdio.h>
/**
 * main - main block
 * Descrpition: print the alphabet in lower case
 * and then in uppercase, follow by a new line
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
