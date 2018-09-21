#include <stdio.h>


int main(int argc, char const *argv[])
{
	
	// array length
	int LENGTH = 8;

	/*Array*/
	int array[8] = {55,43,2,42,100,3,18,222};
	int aux; 

	/* first "for" is used to get array position which will be compared to others */	
	for (int i = 0; i <= LENGTH -1; ++i)
	{

		// "min" is the pointer with the lesser value. It always start with "i" position
		int min = i;
		
		/* second "for" is used to go through the array, position by position, beginning from position "i" */
		for (int j = i+1; j <= LENGTH; ++j)
		{
			/* comparing  array positions and swapping 
 			the pointer "min" if first position greater than second one. */
			if (array[min] > array[j])
			{
				//swap positions
				min = j;
			}
		}

		// swapping values if "min" change
		if (min != i)
		{
			aux = array[i];
			array[i] = array[min];
			array[min] = aux;
		}
	}


	printf("\n*** SELECTION SORT ***");
	printf("\nCompare pointer value with values in right  of array,\n");
	printf("if current value greater than pointer it swap value.\n");
	printf("After compare pointer with values in the right,\n");
	printf("pointer get next value in right side as pointer\n");
	printf("and compare with others in the right side.\n\n");
	/* "for" used to show sorted array */
	for (int i = 0; i < LENGTH ; i++)
	{
		printf("array[%d] => %d \n",i, array[i]);
	}

	printf("\n");
	//exit
	return 0;
}