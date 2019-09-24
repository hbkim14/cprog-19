#include <stdio.h>

int main(void)
{
	int a,b;
	double result;
	
	printf("Frist:");
	scanf("%d",&a);
	printf("Second:");
	scanf("%d",&b);

	result = (double)a/(double)b;

	printf("%f\n",result);

	return 0;
}
