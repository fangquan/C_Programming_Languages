#include<stdio.h>
# define LOWER 0
# define UPPER 300
# define STEP 20
# define lower -20
# define upper 120
# define step  10

/*
	Convert corresponding Fahrenheit to Celsius
	Convert corresponding Celsius to Fahrenheit
*/


main()
{

        int fahr;
        // 'for' loop initial declaration used outside C99 mode
        //  initial declaration can't be in 'for' loop
       	printf ("Convert corresponding Fahrenheit to Celsius\n");
        printf ("%3s,%6s\n","F","C");
        for ( fahr = LOWER;fahr<=UPPER;fahr += STEP)
        {
                printf ("%3d,%6.1f\n",fahr,(5.0/9.0)*(fahr-32));                
        }
	
	
        int cel;
	printf ("Convert corresponding Celsius to Fahrenheit\n");
        printf ("%3s,%6s\n","C","F");
        for ( cel = lower;cel<=upper;cel += step)
        {
                printf ("%3d,%6.1f\n",cel,(9.0/5.0)*cel+32);
        }

}

