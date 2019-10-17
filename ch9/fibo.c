#include <stdio.h>

int fibo(int n)
{
	switch (n) {
		case 1:
			return 1;
			break;
		case 2:
			return 1;
			break;
		default:
			return fibo(n-2) + fibo(n-1);
			break;
	}
}

int main(void)
{
	int months;
	printf("n개월 후:");
	scanf("%d",&months);

	printf("토끼 쌍의 수: %d\n",fibo(months));
	return 0;
}	
