#include <stdio.h>

int main(int argc, char const *argv[])
{

	int LENGTH = 7; //constant 
	int aux; // help the changes
	int loop = 1; // loop interruptor
	int arr[7] = {64,40,2,53,4,1,66}; // array
	int cont = 0; // cont
	int last_cont = 0; // last cont

	
	/* while used to start "for" */
	while (loop == 1)
	{	
		/*loop in array*/
		for (int i = 0; i < LENGTH; i++)
		{	

			/* change position between arr[i] and arr[i+1] */
			if ( arr[i] > arr[i+1])
			{
				aux = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = aux;
				cont = last_cont +1;
			}				
		}
		
		/* check if last "for" and current "for" had changes */
		if (last_cont == cont)
		{
			/* turn "loop" off */	
			loop = 0;
		}

		/* "last_cont" receive "cont" value */
		last_cont = cont;
	}

	/* "for" used to show sorted array */
	for (int i = 0; i <= LENGTH ; i++)
	{
		printf("array[%d] => %d \n",i, arr[i]);
	}

	/* exit */
	return 0;
}