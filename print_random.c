#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "random.h" /* includes randchar function */

int main()
{
    /* initalizes an int variable */
	int a;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
    /* runs through a loop seven times each time printing the random character generated from randchar */
	for(a=0;a<7;a++)
		putchar( randchar() );
	putchar('\n');

	return(0);
}