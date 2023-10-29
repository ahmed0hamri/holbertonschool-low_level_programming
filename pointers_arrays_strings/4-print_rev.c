#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev- check the code
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i, n;

	n = strlen(s);

	for (i = 0; i < n; i++)
	{
		_putchar(s[n - 1 - i]);
	}
	_putchar('\n');
}
