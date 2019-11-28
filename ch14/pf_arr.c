#include <stdio.h>

double add(int x, int y);
double sub(int x, int y);
double mul(int x, int y);
double div(int x, int y);

void menu(void)
{
	printf("====================\n");
	printf("0. 덧셈\n");
	printf("1. 뺄셈\n");
	printf("2. 곱셈\n");
	printf("3. 나눗셈\n");
	printf("4. 종료\n");
	printf("====================\n");
}

int main(void)
{
	int choice, x, y;
	double result;
	// 함수 포인터 배열
	double (*func[4])(int, int) = { add, sub, mul, div };

	while(1)
	{
		menu();
		printf("메뉴를 선택하시오: ");
		scanf("%d",&choice);

		if (choice < 0 || choice > 3)	// 종료
			break;

		printf("2개의 정수를 입력하시오: ");
		scanf("%d %d",&x,&y);

		result = func[choice](x,y);	// 함수 포인터 이용 --> 함수 호출
		printf("연산결과: %f\n", result);
	}
	return 0;
}

double add(int x, int y)
{
	return x+y;
}

double sub(int x, int y)
{
	return x-y;
}

double mul(int x, int y)
{
	return x*y;
}

double div(int x, int y)
{
	return (double)x/(double)y;
}
