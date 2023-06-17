#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
