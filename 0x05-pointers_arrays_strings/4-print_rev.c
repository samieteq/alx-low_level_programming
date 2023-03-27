#include "main.h"
#include <string.h>

/**
 * print_rev -  prints a string
 *
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
        int len, i;

        len = strlen(s);
        for (i = len; i >= 0; i--)
        {
                _putchar(*(s + i));
        }
        _putchar('\n');
}