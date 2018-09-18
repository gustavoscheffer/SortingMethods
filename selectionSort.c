#include <stdio.h>


int main(int argc, char const *argv[])
{
	
	int LENGTH = 8;

	/*Array*/
	int array[8] = {55,43,2,42,100,3,18,222};
	int aux; 

	/* first "for" is used to set array positon to be compared to others */	
	for (int i = 0; i < LENGTH -1; ++i)
	{
		/* second "for" is used to go through the array,  positon by position, begining from position "i" */
		for (int j = i; j < LENGTH -1; ++j)
		{
			/* compare array positions and change if first position greater than second */
			if (array[i] > array[j])
			{
				aux = array[i];
				array[i] = array[j];
				array[j] = aux;
			}
		}
	}

	/* "for" used to show sorted array */
	for (int i = 0; i < LENGTH ; i++)
	{
		printf("array[%d] => %d \n",i, array[i]);
	}

	//exit
	return 0;
}