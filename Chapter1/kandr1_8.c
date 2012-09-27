#include <stdio.h>
/*
 	exercise 1-8
	count blanks, tabs and newlines
*/
int main()
{
	int blanks, tabs, newlines;
  	int c;
  	blanks = 0;
  	tabs = 0;
  	newlines = 0;
	while ( (c=getchar()) != EOF )
	{
		if (c == ' ')
			blanks++;
		if (c == '\n')
			newlines++;	
		if (c == '\t')
			tabs++;
	}
	printf ("%5d blanks\n", blanks);
	printf ("%5d newlines\n", newlines);
	printf ("%5d tabs\n", tabs);
	return 0;
}



