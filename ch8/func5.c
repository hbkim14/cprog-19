#include <stdio.h>
#include <math.h>
#define PI 3.141592

double get_height(double a, double d)
{
	double radians = d*(PI/180.0);
	double result = a*sin(radians);
	return result;
}

int main(void)
{
	double a, d, b;
	
	printf("빗변의 길이: ");
	scanf("%lf",&a);
	printf("각도: ");
	scanf("%lf",&d);

	b = get_height(a,d);

	printf("높이: %lf\n",b);
	return 0;
}
