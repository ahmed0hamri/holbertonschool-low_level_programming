#include "main.h"
/**
 * check the code
 * @str: pointer
 * Return: NULL or string
 */
char *_strdup(char *str)
{
    int i = 0;

    if (str == NULL)
    {
        return (NULL);
    }
    while (str[i] != '\0')
    {
        i++;
    }
    printf("%s", str);
    str = malloc(sizeof(char) * i + 1);
    return (str);
}