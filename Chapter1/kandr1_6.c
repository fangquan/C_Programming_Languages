#include<stdio.h>
/*
	exercise 1_6
	test that getchar() != EOF is equal to 0 or 1
*/

int main()
{
	int c;
	c = ( getchar() != EOF );
	printf ("%3d \n", c);	
	return 0;
}



