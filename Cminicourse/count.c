// count characters
// count lines
// count words

#include<stdio.h>
void countlines();
void countcharacters();
void countwords();

int main()
{
    //countlines();
    //countcharacters();	
    countwords();	   
    return 0;
}

void countlines()
{
	printf ("count the number of lines from here\n");
	int c;
	int nl;
	nl = 0;
    	while ((c = getchar()) != EOF)
    	{
        	if ( c == '\n') ++nl;
    	}
    	printf ("Number of lines = %d\n",nl);
}

void countcharacters()
{
	printf ("count the number of characters from here\n");
	int c;
	int nc;
	nc = 0;
	while ((c=getchar()) != EOF )
	{
		++nc;
	}
	printf ("Number of characters = %d\n",nc);
}

void countwords()
{
	// a "word" means something without space, newline and tab 
	printf ("count the number of words from here\n");
	int c;
	int isword = 0;
	int nw = 0;
	while ( (c = getchar()) != EOF )
	{
		if ( c == ' ' || c == '\n' || c == '\t')
		{
			isword = 0;
		}		
		else if ( isword == 0)
		{
			isword = 1; nw++;
		}
	}
	printf ("Number of words = %d\n",nw);
}





