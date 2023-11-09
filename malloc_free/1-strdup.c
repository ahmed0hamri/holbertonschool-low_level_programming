#include "main.h"
/**
 * check the code
 *@size: number of cases
 *@c: char
 * Return: ptr.
 */
char *_strdup(char *str)
{
    int i;

    if (str == NULL)
    {
        return (NULL);
    }
    for (i = 0; i != '\0'; i++)
        str[i];
    printf("%s", str);
    str = malloc(sizeof(char) * i + 1);
    return (str);
}