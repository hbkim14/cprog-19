#include <stdio.h>

int main(void)
{
	int height;
	int width;
	float area;

	printf("height:");
	scanf("%d", &height);

	printf("width:");
	scanf("%d", &width);

	area=height*width/2;

	printf("area = %f.\n", area);

	return 0;
}
