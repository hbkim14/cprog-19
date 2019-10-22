#include<stdio.h>

void get_sum(int arr[],int size)
{
	int copy_arr[size];			// copy
	for (int i=0;i<size;i++)
		copy_arr[i] = arr[i];

	for (int i=1;i<size;i++)	// sum
		copy_arr[i] = arr[i-1] + arr[i];
		
	for (int i=0;i<size;i++)	// copy_arr --> arr
		arr[i] = copy_arr[i];
}

int main()
{
	int arr[10];

	for (int i=0;i<10;i++)
		arr[i] = i;

	get_sum(arr,10);

	for (int i=0;i<10;i++)
		printf("%d\n",arr[i]);
}
