#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry point
*
*a program that prints the alphabet in lowercase except e and q.
*
*Return: Always (Success)
*/
int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z' ; ch++)
{
if ((ch != 'e') && (ch != 'q'))
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
