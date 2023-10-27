#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _puts - check the code
 * @str: pointer
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i;

	for (i =0; str[i] != '\0'; i++)
	{
		putchar(str[i] + 0);
	}
		putchar('\n');
}
