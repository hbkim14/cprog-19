#include <stdio.h>

int factorial(int n)
{
	if (n <= 1) return 1;
	else return n * factorial(n-1);
}

int main(void)
{
	int num;
	printf("숫자를 입력하시오:");
	scanf("%d",&num);

	printf("%d! = %d\n",num,factorial(num));

	return 0;
}
