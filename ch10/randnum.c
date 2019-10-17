#include <stdio.h>
#include <stdlib.h>
#define RANGE 100
#define SIZE 5

int main(void)
{
	int i;
	int start = 1;
	int a, b, temp;
	int arr[RANGE];
	int scores[SIZE];

	for (i=0;i<RANGE;i++) {
		arr[i] = start;
		start++;
	}

	for (i=0;i<100;i++) {
		a = rand()%100;
		b = rand()%100;
		temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
	}

	for (i=0;i<SIZE;i++)
		printf("%d ",arr[i]);
	printf("\n");
/*
	for (i=0;i<SIZE;i++)
		scores[i] = rand()%100;

	for (i=0;i<SIZE;i++)
		printf("scores[%d] = %d\n",i,scores[i]);
*/
	return 0;
}
