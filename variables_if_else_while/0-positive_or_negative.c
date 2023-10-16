#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
 *This is a multiline comment
 *description: execute a block of code based on the value of the given expression
 *Return - 0 Successful
 */
int main(void)
{
	int n

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)	
		printf("%d is positive",n);
	else if (n < 0) 
	      printf("%d is negative",n);
	else
	 (n = 0) 
		printf("%d is zero",n);

	return 0;
	
}
