#include <stdio.h>

int main(void)
{
	int x;
	
	printf("number:");
	scanf("%d", &x);

	(x%2==0)?printf("even\n"):printf("odd\n");

	return 0;
}
