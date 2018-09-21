#include <stdio.h>

int main(int argc, char const *argv[])
{

	int LENGTH = 7; //constant 
	int aux; // help the changes
	int loop = 1; // loop interruptor
	int last_mod; // last cont

	
	/* Array */
	int arr[7] = {44,1,100,33,4,2,0}; 
	
	/* This variable is responsible to shorten the array from the last to the first. */
	last_mod = LENGTH;

	/* While used to start "for" */
	while (loop == 1)
	{	
		/* Set loop to FALSE because if none change occur inside array. The loop will stopped. */
		loop = 0;

		/* loop in array */
		for (int i = 0; i < last_mod -1 ; i++)
		{	

			/* change position between arr[i] and arr[i+1] */
			if ( arr[i] > arr[i+1])
			{
				aux = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = aux;
				
				// if position is changed, variable loop will be TRUE
				loop = 1;
			}				
		}
		// new length to search
		last_mod  = last_mod --;
	}

	printf("\n *** BUBBLE SORT ***\n");
	printf("\n Swap values between pointer and next value if pointer value greater\n");
	printf("than next one. Keep on swapping until array be sorted.\n\n");

	/* "for" used to show sorted array */
	for (int i = 0; i < LENGTH ; i++)
	{
		printf("array[%d] => %d \n",i, arr[i]);
	}

	printf("\n");
	/* exit */
	return 0;
}