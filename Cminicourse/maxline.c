//
// maxline.c returns the longest line and its length

#include <stdio.h>
#define MAXLen 1000

int     getline1 ( char line[], int lim);
void    copy (char to[] , char from[]);

int main()
{
    int length, max;
    char line[MAXLen], longest[MAXLen];
    max = 0;
    
    while ( ( length = getline1(line,MAXLen))  > 0)
    {
	printf("%d characters.\n", length);
        if (length > max)
        {
            max = length;
            copy (longest,line);
        }
    }
    
    if ( max > 0)
    {
	printf ("Longest line is %s \n",longest);
        printf("%d characters.\n", max);
    }
    return 0;
}

/* getline1: read a line into s, return length */
int getline1 (char s[], int lim)
{   
    int c, i;
    // int 也可以当做字符用
    for ( i=0; i<lim-1 && (c=getchar())!=EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }
    
    if (c == '\n')
    {
        s[i] = c;
        ++ i;
    }
    s[i] = '\0'; // append to the end of the string, '\0' is a signal
    return i;
}

/* copy: copy 'from' to 'to' */
void copy (char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i]=from[i]) != '\0')
    {
        ++i;
    }
}


