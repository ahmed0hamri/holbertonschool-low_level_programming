#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - this main gives you if n is negative or positive or zero.
*
*description: execute a block of code based
*
**Return: Always (Success)
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
