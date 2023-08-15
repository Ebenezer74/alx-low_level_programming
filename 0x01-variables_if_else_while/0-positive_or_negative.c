#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 *main - A function that checks the state of a number
 * Return:0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{printf("%d is positive\n", n);
}	
else if (n == 0)
{printf("%d is zero\n", n);
}
else
{print ("%d is negative\n", n);
}
return (0);
