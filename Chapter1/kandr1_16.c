/*
	correctly print the length of arbitrarily long input lines, and as much as possible of the text
	Idea:
		Very much the same to 1_17
*/

#include<stdio.h>
#define HUGE 1500
void SaveThisChar (char* buffer, int i, char c){
	*(buffer+i) = c;
}

void PrintThisLine (char* buffer, int i) {
	int j;
	for ( j = 0; j<i;j++) {
		printf ("%c",*(buffer+j));
	}	

}

// Passing array in C is always passing its address. 
// But in the function definition, 2d or 1d have different ways to define them, when the function is called, just put the array name there. 
int main(int argv, char **argc) {
	int c; c = 0;
	char buffer[HUGE];
	int offset = 0;
	while ( (c = getchar()) != EOF) {		
		if ( c == '\n') {
			printf ("Length: %d ",offset);
			PrintThisLine(buffer,offset);
			offset = 0;
		}
		else {
		SaveThisChar(buffer, offset, c);
		offset++;
		}
	}
}
