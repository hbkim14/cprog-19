#include <stdio.h>
#define SIZE 10

int main()
{
	int array[SIZE] = {3,2,9,7,1,4,8,0,6,5};
	int i, j, index, tmp;

	// input
	printf("array:");
	for (i=0;i<SIZE;i++)
		printf(" %d",array[i]);
	printf("\n");

	// selection sort
	for (i=0;i<SIZE-1;i++)
	{  
		// finding min
		index = i;
		for (j=i+1;j<SIZE;j++) {
			if (array[j] < array[index])
				index = j;
		}
		// changing index
		tmp = array[i];
		array[i] = array[index];
		array[index] = tmp;
	}

	// output
	printf("sorted array:");
	for (i=0;i<SIZE;i++)
		printf(" %d",array[i]);
	printf("\n");
}
