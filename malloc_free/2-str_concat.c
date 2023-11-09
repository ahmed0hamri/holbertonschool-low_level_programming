#include"main.h"
/**
 * heck the script 
 * @str: pointer
 * Return: NULL or string
 */
char *str_concat(char *s1, char *s2)
{
    char *p;
    if (s1==NULL)
        s1="\0";
    if (s2==NULL)
        s2="\0";
    while(p==NULL)
        p=malloc(strlen(*s1)+strlen(*s2)+1);
    p=strcat(*s1,*s2);
    return(p);
}
