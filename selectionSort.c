#include <stdio.h>



int main(int argc, char const *argv[])
{
	
	int LENGTH = 8;

	/*Array*/
	int array[8] = {55,43,2,42,100,3,18,222};




	/* "for" used to show sorted array */
	for (int i = 0; i < LENGTH ; i++)
	{
		printf("array[%d] => %d \n",i, array[i]);
	}

	//exit
	return 0;
}