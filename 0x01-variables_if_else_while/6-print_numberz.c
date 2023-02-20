#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from o,
 * followed by a new line, using putchar
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 58; n < 68; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
