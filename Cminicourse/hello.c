#include <stdio.h>
#include <stdlib.h>
// This is the test program, for the C mini course

int main(int argc, char **argv)
{
    int a = 3,b = 4;
    printf ("a == %d, b == %d\n",a,b);
	printf ("a is located at %p, b is located at %p\n",&a,&b);
    int *myptr = &a;
    printf("myptr points to %p \n",myptr);
    printf("the value of myptr is %d \n",*myptr);
    
    // pointers and arrays
    int array[10];
    int ar;
    printf("The starting address of array is %p \n",array);
    printf("The address of ar is %p \n",&ar);
    
    // malloc/free ???
    int *myint = (int*) malloc(sizeof(int));
    *myint = 5;
    printf ("%lu \n", sizeof(int));
    printf ("%p \n", myint);
    printf ("%d \n", *myint);
    
    free(myint);
    printf ("%p \n", myint);
    
    // dynamic array
    int n = rand() % 100;
    int *array1 = (int*) malloc (n*sizeof(int));
    int i;
    for (i = 0; i < n; i++)
    {
        array1[i] = 0;
    }
    free(array1);
    array1 = NULL;
    
    
    return 0;
}

