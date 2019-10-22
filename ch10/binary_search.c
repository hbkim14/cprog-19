#include <stdio.h>
#define SIZE 16

int binary_search(int arr[],int size,int key)
{
	int low, high, mid;

	low = 0;
	high = size-1;

	while (low <= high) 
	{
		mid = (low + high)/2;
	
		if (key == arr[mid])
			return mid;
		else if (key > arr[mid])
			low = mid+1;
		else
			high = mid-1;
	}
	return size;
}

int main()
{
	int grade[SIZE] = { 2,6,11,13,18,20,22,27,29,30,34,38,41,42,45,47 };
	int key, result;

	printf("탐색할 값 입력: ");
	scanf("%d",&key);

	result = binary_search(grade,SIZE,key);

	if (result == SIZE)
		printf("NOT FOUND\n");
	else
		printf("탐색결과(index): %d\n",result);

	return 0;
}
