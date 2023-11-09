#include"main.h"
/**
 * heck the script 
 * @str: pointer
 * Return: NULL or string
 */
char *str_concat(char *s1, char *s2)
{
    int i;
    char *p;
    if (s1==NULL)
        s1="\0";
    if (s2==NULL)
        s2="\0";
    while(p==NULL)
        p=malloc(strlen(s1)+strlen(s2)+1);
    for(i=0;i<strlen(s1)+strlen(s2)+1;i++)
    {
        if (i<strlen(s1))
            p[i]=s1[i];
        else
            p[i]=s2[i-strlen(s1)];
    }
    return(p);
}
