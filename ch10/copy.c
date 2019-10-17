#include <stdio.h>
#define SIZE 6

int main(void)
{
	int src[SIZE] = {0,1,2,3,4,5};
	int dest[SIZE] = {0};
	
	int i = SIZE-1;
	int j = 0;

	while (j<SIZE) {
		dest[j] = src[i];
		j++;
		i--;
	}

	printf("src:");
	for (i=0;i<SIZE;i++)
		printf("%d ",src[i]);
	printf("\n");

	printf("dest:");
	for (i=0;i<SIZE;i++)
		printf("%d ",dest[i]);
	printf("\n");

	return 0;
}
