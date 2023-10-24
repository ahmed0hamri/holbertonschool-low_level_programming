#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 *@a: pointer
 *@b: pointer
 * Return: Always (Success)
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
