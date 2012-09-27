/*
	With functions, you can ignore "how to do", just know "what to do"
	
*/
#include<stdio.h>
int power (int, int);

int main()
{
	int i;
	for ( i=0; i<=10; i++ )
	{
		printf ("%5d %5d %8d \n", i, power(2,i),power(-3,i));
	}
}

int power (int base, int n)
{
	int i=0;
	int result = 1;
	for (i=1;i<=n;i++)
	{
		result *= base;	
	}
	return result;
}

