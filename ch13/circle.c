#include <stdio.h>

struct circle {
	int x;
	int y;
	int r;
};

int main()
{
	struct circle c1, c2;

	printf("첫번째 원 입력 (x,y,r): ");
	scanf("%d %d %d", &c1.x, &c1.y, &c1.r);

	printf("두번째 원 입력 (x,y,r): ");
	scanf("%d %d %d", &c2.x, &c2.y, &c2.r);

	if ( (c1.x == c2.x)&&(c1.y == c2.y)&&(c1.r == c2.r) )
		printf("두 원은 동일한 원입니다.\n");
	else
		printf("두 원은 동일한 원이 아닙니다.\n");

	return 0;
}
