#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0
 */
int main(void)
{
	int n, j;

	for (n = 0; n < 100; n++)
	{
		for (j = n + 1; j < 100; j++)
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');

			putchar(' ');

			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (j == 99 && n == 98)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
