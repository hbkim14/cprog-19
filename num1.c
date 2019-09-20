#include <stdio.h>

int main()
{
	unsigned int num;
	scanf("%u",&num);

	int a, b;
	unsigned int mask = 1;
	
	a = 0;
	b = 0;
	while (a<=7) {
		if ((num&mask)!=0)
			b++;
		mask = mask<<1;
		a++;
	}
	printf("count: %d\n", b);

	return 0;

}
