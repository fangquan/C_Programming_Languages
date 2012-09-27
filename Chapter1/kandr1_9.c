/*
	Exercies 1-9
	replace each string of one or more spaces into just 1 space
*/

#include<stdio.h>
int main()
{
	int c;
	int inspaces = 0;
	while ( (c = getchar()) != EOF ) 
	{
		if ( c != ' ' )
		{
			putchar(c);
			inspaces = 0;	
		}
		if ( c == ' ' && inspaces == 0 )
		{
			putchar(c);  
			inspaces = 1;		
		}
	}
	return 0;
}

