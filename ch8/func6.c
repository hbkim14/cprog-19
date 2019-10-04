#include <stdio.h>
#include <math.h>
double get_length(double a, double b)
{
	double c = sqrt((a*a)-(b*b));
	return c;
}

int main()
{
	double a, b, c;

	printf("빗변: ");
	scanf("%lf",&a);

	printf("높이: ");
	scanf("%lf",&b);

	c = get_length(a,b);
	printf("밑변: %lf\n",c);

	return 0;
}
