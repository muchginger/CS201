#include <stdio.h>
#include <stdlib.h>

// You are only allowed to make changes to this code as specified by the comments in it.

// The code you submit must have these two values.
#define N_TIMES		600000
#define ARRAY_SIZE	 10000

int main(void)
{
	double	*array = calloc(ARRAY_SIZE, sizeof(double));
	double	sum = 0;
	int		i;
	for(i=0;i<ARRAY_SIZE; i++) array[i]=(double) i;

	// You can add variables between this comment ...

	// ... and this one.

	// Please change 'your name' to your actual name.
	printf("CS201 - Asgmt 4 - Aris Bloms \n");

	for (i = 0; i < N_TIMES; i++) {

		// You can change anything between this comment ...

		for (int j = 0; j < ARRAY_SIZE; j++) {
			sum += array[j] + array[j+1] + array[j+2] + array[j+3] + array[j+4] + array[j+5] +
                          array[j+6] + array[j+7] + array[j+8] + array[j+9] + array[j+10] + array[j+11] + array[j+12] + 
                          array[j+13] + array[j+14] + array[j+15];
                        j += 15;
			}

		// ... and this one. But your inner loop must do the same
		// number of additions as this one does.

		}

	// You can add some final code between this comment ...

	// ... and this one.
printf("Sum=%f\n", sum);
	return 0;
}
