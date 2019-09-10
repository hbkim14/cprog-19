#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int sum;

	printf("First:");
	scanf("%d", &x);

	printf("Second:");
	scanf("%d", &y);

	sum = x+y;
	printf("sum: %d", sum);

	return 0;
}
