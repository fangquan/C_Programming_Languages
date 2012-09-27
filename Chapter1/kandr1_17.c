/*
	Write a program to print all input lines that are longer than 20 characters. 
	Idea:
		(1) Save each input line into a buffer;
		(2) Print that line if it's longer than 20.
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
		SaveThisChar(buffer, offset, c);
		offset++;
		if ( c == '\n') {
			if (offset > 20) {
				PrintThisLine(buffer,offset);				
			}
			offset = 0;
		}
	}
}
