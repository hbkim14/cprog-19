#include <stdio.h>

int main(void)
{
	double rate;
	double usd;
	int krw;

	printf("rate:");
	scanf("%lf", &rate);

	printf("won:");
	scanf("%d", &krw);

	usd = krw/rate;

	printf("%d won is $%lf.\n", krw, usd);

	return 0;
}
