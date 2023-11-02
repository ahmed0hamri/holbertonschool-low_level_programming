#include "main.h"
/**
 * _print_rev_recursion - check the code
 * Description: print a string backwards
 * @s : pointer to string
 * Return: Void
 */

void _print_rev_recursion(char *s)
{
	
	if (*s != '\0')
	{
		_puts_rev_recursion(s + 1);
		_putchar(*s);
	}
}
