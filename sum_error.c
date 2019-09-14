#include<stdio.h>
int main(void)
{
	int x,y,z,sum;

	sum=0;
	printf("input (x, y, z):");
	scanf("%d %d %d", &x,&y,&z);
	sum += x;
	sum += y;
	sum += z;
	printf("sum: %d\n", sum);
	return 0;
}
