#include <stdio.h>

int main(int argc, char const *argv[])
{


	int  arr[10]  ={3,1000,7,83,4,0,10,1,22,99}; 
	int gap, temp, j, i;
	int arr_length = 10;



	/* for used to set manage gap used in this algoritthim */
	for (gap = arr_length/2; gap > 0; gap/=2)
	{
		//debug
		//printf("Valor da var gap = %d\n", gap);

		/* for used to control gap position */
		for (i = gap; i < arr_length;i+=1)
		{	
			
			// var temp used to save value of array[i]
			temp =arr[i];

			//debug
			// printf("Valor da var i = %d\n", i);
			// printf("Valor da var temp = %d\n", temp);

			/* for used to compare and change the value with the current variable*/
			for (j = i; j>=gap && arr[j-gap] > temp; j-=gap)
			{	
				// debug
				// printf("Valor da var j = %d\n", j);
				
				arr[j] = arr[j-gap];

				//debug
				// printf("Valor da var arr[j] = %d\n", arr[j]);
				// printf("========\n");
			}
			//change value of current position
			arr[j]= temp;

			//debug
			// printf("Valor da var arr[j] = %d - VALOR final\n", arr[j]);
			// printf("----------\n");
		}
	}


	/* "for" used to show sorted array */
	printf("\n *** SHELL SORT ***\n");
	printf("Shell Sort compares current position with position set in gap variable instead of compare\n");
	printf("to adjacent position. Afterwards the GAP value will be divided for 2 until the end.\n");

	printf("This is shell sort\n\n");

	for (int i = 0; i < arr_length ; i++)
	{
		printf("array[%d] => %d \n",i, arr[i]);
	}

	printf("\n");
	/* exit */
	return 0;
}