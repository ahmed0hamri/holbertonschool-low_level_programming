#include"main.h"

/**
 * create_array - initialize an array with n number of cases
 *@size: number of cases
 *@c: char
 * Return: ptr.
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	int i;

	if (size < 1)
	{
		return NULL;
	}
	do {
		p = malloc(sizeof(char) * size);
	}
	while (p == NULL);
	for (i=0, i<n, i++)
		p[i]=c;	
	return (p);
}
