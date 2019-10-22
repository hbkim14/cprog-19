#include <stdio.h>
#define SIZE 5

int get_min(int arr[])
{
	int i;
	int min = arr[0];
	
	for (i=0;i<SIZE;i++) {
		if (arr[i] < min)
			min = arr[i];
	}

	return min;
}

int get_max(int arr[])
{
	int i;
	int max = arr[0];
	
	for (i=0;i<SIZE;i++) {
		if (arr[i] > max)
			max = arr[i];
	}

	return max;
}

int main(void)
{
	int myarr[SIZE] = {1,2,3,4,5};

	int min, max;
	min = get_min(myarr);
	max = get_max(myarr);

	printf("min: %d, max: %d\n", min, max);
	return 0;
}
