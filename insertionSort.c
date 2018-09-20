#include <stdio.h>

int main(int argc, char const *argv[])
{
	

	
	// Array
	int array[10] = {65,3,33,5,8,6,55,4,22,9}; // {3,4,5,6,8,9,22,33,55,65}
	
	int LENGTH = 10; // array length
	int aux; // variable used to support the values changings
	int pos; // save last position used to change

	
	/* for used do go througth the array*/
	for (int i = pos; i < LENGTH; i++)
	{	
		// compare if first value is greater than second
		if (array[i] > array[i+1])
		{
			// Save last position to swap
			pos  = i;

			/*for used to compare last value change with previus*/
			for (int j = (pos+1); j > 0; j--)
			{	
				// if previous value is greater than current, Then change
				if (array[j-1] > array[j])
				{
					aux  = array[j];
					array[j] = array[j-1];
					array[j-1] = aux;
				}

			}

		}	
	}


	printf("\nSORTED\n");
	/* for used to show sorted array */
	for (int i = 0; i < LENGTH; i++)
	{
		printf("array[%d] => %d \n", i, array[i]);
	}

	//exit
	return 0;
}