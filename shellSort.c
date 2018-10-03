#include <stdio.h>

int main(int argc, char const *argv[])
{


	int  arr[10]  ={3,1000,7,83,4,0,10,1,22,99}; 
	int gap, temp, j, i;
	int arr_length = 10;



	for (gap = arr_length/2; gap > 0; gap/=2)
	{
		for (i = gap; i < arr_length;i+=1)
		{
			temp =arr[i];
			for (j = i; j>=gap && arr[j-gap] > temp; j-=gap)
			{
				arr[j] = arr[j-gap];
			}
			arr[j]= temp;
		}
	}


	/* "for" used to show sorted array */
	printf("\n *** SHELL SORT ***\n");
	printf("This is shell sort\n\n");

	for (int i = 0; i < arr_length ; i++)
	{
		printf("array[%d] => %d \n",i, arr[i]);
	}

	printf("\n");
	/* exit */
	return 0;


	// OLD VERSION
	// gap  = arr_length / 2;
	// //printf("%d\n", gap );

	// while( gap > 0)
	// {
	// 	for (int i = 0; i < (arr_length - gap); i++)
	// 	{
	// 		if (arr[i] > arr[i + gap])
	// 		{
	// 			temp = arr[i];
	// 			arr[i] = arr[i + gap];
	// 			arr[i + gap] = temp;
	// 		}
				
	// 	}
	// 	gap  = gap -1;
	// 	printf("%d\n", gap );
	// }
}