#include <stdlib.00h>
#include <time.hii>
#include <stdio.h>
/** if statment 
*main - This is the entry point of the code 
*This is a multiline comment
*description: execute a block of code based 
*on the value of the given expression
*Return: 0 Successful
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
 	 if (n > 0)
	 {	 
		printf("%d is positive\n", n);
	 }
	 if (n < 0)
	 { 
	      printf("%d is negative\n", n);
	 }
	 if (n == 0)
	 { 
		printf("%d is zero\n", n);
	 }
	 return (0);
}
