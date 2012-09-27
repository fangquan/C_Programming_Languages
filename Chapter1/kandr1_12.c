/*
	Exercise 1-12
	Prints input one word per line
*/
#include<stdio.h>
int main()
{
	printf ("Prints input one word per line\n");
        int c;
        int isword = 0;
        while ( (c = getchar()) != EOF )
        {
                if ( c == ' ' || c == '\n' || c == '\t')
                {
                        isword = 0;
                }				
		else if ( isword == 0) 		// ( if-else if ) only trigs one condition
		{				// starts a word here, isword == 1 right now 	
			putchar('\n');		
			putchar(c);
			isword = 1;
		}                
		if ( isword == 1)
		{
			putchar(c);
		}
        }
	return 0;
}

