#include "main.h"
<<<<<<< HEAD
#include <math.h>
/**
 * _sqrt_recursion - chech the code.
 * @n: int
 * @i: int
 * Return: Always 0.
 */
int sqr(int n, int i);
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}
/**
 * sqr - check the code.
 * @n: int
 * @i: int
 * Return: Always 0.
 */

int sqr(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i < n)
	{
		return (sqr(n, i + 1));
	}
	else
	{
		return (-1);
	}
=======
/**
 * _sqrt_recursion - check the code
 * Description: count the square root of @n
 * @n : int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n > 0)
		return (square(n, 1));
	else
		return (-1);
}
/**
 * square - check the code
 * Description : check if @y squared is @x
 * @x : unsigned long
 * @y : unsigned long
 * Return: int
 */
int square(unsigned long x, unsigned long y)
{
	if (y * y == x)
		return (y);
	else if (y * y < x)
		return (square(x, y + 1));
	else
		return (-1);
>>>>>>> eb47f8de69da689c912f0b64fd7661e5c01242d7
}
