#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
		putchar(ch);
	for (ch = 97; ch < 103; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
