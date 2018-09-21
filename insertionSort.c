#include <stdio.h>

int main(int argc, char const *argv[])
{
	

	
	// Array
	int array[10] = {405,3,39,5,100,6,55,4,22,9}; // {3,4,5,6,8,9,22,33,55,65}
	
	int LENGTH = 10; // array length
	int key,j; // save last position used to change

	
	/* for used do go througth the array*/
	for (int i = 0; i < LENGTH; i++)
	{	
		
		//get value from current position
		key  = array[i];

		// put  "i" previous position on "j"
		j = i-1;

		// swap values between previous position and current one if necessary
		while(j >= 0 && array[j] > key)
		{
			array[j+1] = array[j];
			
			// go back to previous position
			j = j-1;
		}
		//go to next position of previous
		array[j+1] = key;
	}


	printf("\n*** INSERTION SORT ***\n");
	printf("Compare pointer value with the next one, if it greater than next,\n");
	printf("it swaps and keep on swapping with the left positions until the smallest\n"); 
	printf("always get stay more left.\n\n");
	
	/* for used to show sorted array */
	for (int i = 0; i < LENGTH; i++)
	{
		printf("array[%d] => %d \n", i, array[i]);
	}

	printf("\n");
	//exit
	return 0;
}