#include <stdlib.00h>
#include <time.hii>
#include <stdio.h>
/** if statment 
*main -his program will assign a random number to the variable n each time it is executed. 
*
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
