#include "main.h"





int _strlen_recursion(char *s)
{

	if (*s)
		return(0);
	else 
		return (1 +strlen_recursion(s + 1));

}
