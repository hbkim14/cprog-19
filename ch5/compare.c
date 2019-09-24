#include <stdio.h>

int main()
{
	int x,y;
	
	printf("First:");
	scanf("%d", &x);
	printf("Second:");
	scanf("%d", &y);

	printf("Big = %d\n", (x>y)?x:y);
	printf("Small = %d\n", (x<y)?x:y);

	return 0;
}
