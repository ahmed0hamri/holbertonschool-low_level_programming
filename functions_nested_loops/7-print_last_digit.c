#include "main.h"
/**
 *print_last_digit - chech code
 *@i : int
 *Return: Always 0
 */
int print_last_digit(int i)
{
	int n;

	n = i % 10;
	if (n >= 0)
{
		_putchar(n + '0');
		return (n);
}
else
{
		_putchar(n * -1 + '0');
		return (n * -1);
}
}
