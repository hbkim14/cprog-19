#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 5

int main()
{
	int arr[ROWS][COLS];
	int i,j;

	for (i=0;i<ROWS;i++) {			// random arr
		for (j=0;j<COLS;j++)
			arr[i][j] = rand()%100;
	}

	for (i=0;i<ROWS;i++) {			// print
		for (j=0;j<COLS;j++)
			printf("%d ",arr[i][j]);
		printf("\n");
	}

	return 0;
}
