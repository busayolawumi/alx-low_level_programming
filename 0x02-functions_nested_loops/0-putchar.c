#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i = 0;

    while ("_putchar"[i] != '\0')
    {
        _putchar("_putchar"[i]);
        i++;
    }
    _putchar('\n');

    return (0);
} 
