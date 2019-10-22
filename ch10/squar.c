#include <stdio.h>
#define SIZE 5

int squar_array(int arr[],int n)
{
	int squar;
	squar = arr[n]*arr[n];
	
	return squar;
}

int main(void)
{
	int input[SIZE] = {1,2,3,4,5};
	int i, result;

	//제곱 배열 출력
	printf("squar_arry:");
	for (i=0;i<SIZE;i++) {
		result = squar_array(input,i);
		printf(" %d",result);
	}
	printf("\n");

	return 0;
}
