//
//  array.c
//  

#include <stdio.h>
int main()
{
    int  c;
    int  i;
    int nwhite = 0;
    int nother = 0;
    /* c for char - ASCII code for integers */
    int ndigit[10];
    for (i=0;i<=9;++i)
    {
        ndigit[i] = 0;
    }
    
    while ( (c=getchar()) != EOF )
    {
        if ( c>='0' && c<='9' )
            ndigit[c -'0']++ ;
	else if ( c == ' ' || c == '\n' || c == '\t')
	    nwhite ++;
	else 
	    nother ++;
    }

    printf("digit count\n");      
    /* print heading */
    for (i=0;i<=9;++i)            /* print counts  */
    {
	printf("%5d%5d\n",i, ndigit[i]);
    }
    printf ("%5s%5d\n", "whites", nwhite);
    printf ("%5s%5d\n", "others", nother);
    return 0;
}
