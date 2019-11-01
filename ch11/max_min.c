#include <stdio.h>
void get_min_max(int arr[], int* min, int* max);

int main()
{
	int arr[5] = {10,2,6,8,4};
	int min,max;

	/* call get_min_max() */
	get_min_max(arr,&min,&max);

	printf("min = %d  max = %d\n",min,max);

	return 0;
}

void get_min_max(int arr[], int* min, int* max)
//void get_min_max(int* arr, int* min, int* max)
{
	//if (!arr) return;  // arr == NULL

	*min = arr[0];
	*max = arr[0];

	for (int i;i<5;i++) {
		if (arr[i] < *min)		// get_min
			*min = arr[i];
	
		if (arr[i] > *max)		// get_max
			*max = arr[i];
	}
}
