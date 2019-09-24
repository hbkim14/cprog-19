#include<stdio.h>
#include<math.h>

int main(void)
{
	double a,b,c,dis;

	printf("a:");
	scanf("%lf",&a);

	printf("b:");
	scanf("%lf",&b);

	printf("c:");
	scanf("%lf",&c);

	if(a==0) {
		if(b==0) printf("x = all real numbers\n");
		else printf("x = %f\n",-c/b);
		goto end;
	}

	dis = b*b-4*a*c;
	if(dis<0) {
		printf("have no x\n");
		goto end;
	}
	
	printf("x1 = %f\n", (-b+sqrt(dis))/(2.0*a));
	printf("x2 = %f\n", (-b-sqrt(dis))/(2.0*a));

	end:
		return 0;
}
