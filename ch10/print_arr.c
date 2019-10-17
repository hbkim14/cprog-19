#include <stdio.h>
#define SIZE 10

int main(void)
{
	int i,j;
	int arr[SIZE] = {3,8,1,1,2,5,2,4,3,6};

	for (i=0;i<SIZE;i++) {
		for (j=0;j<SIZE;j++) {
			if ( (i < j) && ( (arr[i]+arr[j]) >= 10))
				printf("arr[%d] = %d, arr[%d] = %d\n",i,arr[i],j,arr[j]);
		}
	}

	return 0;
}
