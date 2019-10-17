#include <stdio.h>

int hanoi_count(int n, char from, char tmp, char to)
{
	static int cnt = 0;

	if (n==1) {
	//	printf("원판 1을 %c에서 %c으로 옮긴다.\n",from,to);
		cnt += 1;
	}
	else {
		hanoi_count(n-1, from, to, tmp);
	//	printf("원판 %d을 %c에서 %c으로 옮긴다.\n",n,from,to);
		cnt += 1;
		hanoi_count(n-1, tmp, from, to);
	}

	return cnt;
}

int main(void)
{
	int n = 5;

	printf("원판 수: %d\n",n);
	printf("횟수: %d\n",hanoi_count(n,'A','B','C'));

	return 0;
}	
