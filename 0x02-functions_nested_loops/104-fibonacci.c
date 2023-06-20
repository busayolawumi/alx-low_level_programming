#include <stdio.h>
/* more headers goes there */
/**
* main - Entry point
*
* Return: 0
*/
/* betty style doc for function main goes there */
int main(void)
{
	unsigned long long i = 1, j = 2, temp;
	int l;

	printf("1, 2, ");

	for (l = 0; l < 96; l++) {
		temp = i;
		i = j;
		j = temp + i;

		if (l != 95)
			printf("%llu, ", j);
		else
			printf("%llu\n", j);
	}

	return 0;
}
