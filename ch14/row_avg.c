#include <stdio.h>
#define ROWS 4
#define COLS 3

double get_row_avg(int arr[][COLS], int r)
{
	int *p, *endp;
	double sum = 0.0;

	p = &arr[r][0];
	endp = &arr[r][COLS];

	while( p < endp )
		sum += *p++;

	sum /= COLS;
	return sum;
}

int main()
{
	int arr[ROWS][COLS] = { {1,2,3}, {4,5,6}, {7,8,9}, {10,11,12} };
	double result;

	printf("2번 행의 평균 구하기(arr[2])\n");
	printf("원소: %d %d %d\n", arr[2][0], arr[2][1], arr[2][2]);

	result = get_row_avg(arr, 2);
	printf("평균: %f\n", result);

	return 0;
}
