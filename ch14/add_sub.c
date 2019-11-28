#include <stdio.h>

int add(int, int);
int sub(int, int);

int main(void)
{
	int result;
	int (*pf)(int, int);	// 함수 포인터 정의

	pf = add;		// 함수 포인터에 함수 add()의 주소 대입
	result = pf(10, 20);
	printf("10+20 = %d\n", result);

	pf = sub;		// 함수 포인터에 함수 sub()의 주소 대입
	result = pf(10, 20);
	result = pf(10, 20);
	printf("10-20 = %d\n", result);

	return 0;
}

int add(int x, int y)
{
	return x+y;
}

int sub(int x, int y)
{
	return x-y;
}
