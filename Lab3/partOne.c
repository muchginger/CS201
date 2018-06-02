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

		for (int j = 0; j < ARRAY_SIZE; j+=80) {
                 
			sum += array[j+0] + array[j+1] + array[j+2] + array[j+3] + array[j+4] + array[j+5] + 
                          array[j+6] + array[j+7] + array[j+8] + array[j+9] + array[j+10] + array[j+11] + 
                          array[j+12] + array[j+13] + array[j+14] + array[j+15] + array[j+16] + array[j+17] +
                          array[j+18] + array[j+19] + array[j+20] + array[j+21] + array[j+22] + array[j+23] +
                          array[j+24] + array[j+25] + array[j+26] + array[j+27] + array[j+28] + array[j+29] +
                          array[j+30] + array[j+31] + array[j+32] + array[j+33] + array[j+34] + array[j+35] + 
                          array[j+36] + array[j+37] + array[j+38] + array[j+39] + array[j+40] + array[j+41] + 
                          array[j+42] + array[j+43] + array[j+44] + array[j+45] + array[j+46] + array[j+47] + 
                          array[j+48] + array[j+49] + array[j+50] + array[j+51] + array[j+52] + array[j+53] + 
                          array[j+54] + array[j+55] + array[j+56] + array[j+57] + array[j+58] + array[j+59] + 
                          array[j+60] + array[j+61] + array[j+62] + array[j+63] + array[j+64] + array[j+65] + 
                          array[j+66] + array[j+67] + array[j+68] + array[j+69] + array[j+70] + array[j+71] +
                          array[j+72] + array[j+73] + array[j+74] + array[j+75] + array[j+76] + array[j+77] + 
                          array[j+78] + array[j+79]; 
			}

		// ... and this one. But your inner loop must do the same
		// number of additions as this one does.

		}

	// You can add some final code between this comment ...

	// ... and this one.
printf("Sum=%f\n", sum);
	return 0;
}
