#include "main.h"

/**
 * * _puts - check the code
 * @str: pointer
 * Return: Always 0.
 */
void _puts(char *str);<
{

	for (; *str != '\0'; str++)
	{
		_putchar(*str + 0);
	}
	_putchar('\n');
}
