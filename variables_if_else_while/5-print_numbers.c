#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry point
*
*a program that prints all single digit numbers of base 10 starting from.
*
*Return: Always (Success)
*/
int main(void)
{
char n;

for (n = '0'; n <= '10' ; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
