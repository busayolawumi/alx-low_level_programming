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
	double i = 1, j = 1, temp;
	int l;

	for (l = 0; l < 98; l++)
	{
		if (l != 97)
			printf("%d, ", (int) j);
		else 
			printf("%d\n", (int) j);
		temp = i;
		i = j;
		j = temp + i;
	}

	return (0);
}