#include <stdio.h>
#define ROW 5
#define COL 5
#define CNT 3

int main()
{
	int arr[ROW][COL] = { {1,1,1,1,1}, {1,1,1,1,1}, {1,1,1,1,1},
					{1,1,1,1,1}, {1,1,1,1,1} };
	int bomb[CNT][2] = { {1,1}, {0,4}, {2,3} };

	int k,i,j;
	for (k=0;k<CNT;k++)
	{
		int bomb_i = bomb[k][0];	// 폭탄의 위치: (bomb_i, bomb_j)
		int bomb_j = bomb[k][1];
		
		for (i=bomb_i-1;i<bomb_i+2;i++)
			for (j=bomb_j-1;j<bomb_j+2;j++)
				arr[i][j] = 0;
	}

	int size = 0;
	for (i=0;i<ROW;i++) {
		for (j=0;j<COL;j++) {
			size += arr[i][j];			// 남은 영역 크기
			printf("%d ",arr[i][j]);	// 터진 후 배열 print
		}
		printf("\n");
	}
	printf("남은 영역 크기: %d\n",size);

	return 0;
}
