#include "main.h"

/**
* print_alphabet - printsall letters in the  alphabet in lowercase,
*
* followed by a new line
*
* Return: void
*/
void print_alphabet(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
