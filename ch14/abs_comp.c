#include <stdio.h>
#include <stdlib.h>

void print_equal(int a, int b, int (*func)(int, int))
{
	if (func(a,b))
		printf("Equal\n");
	else
		printf("Not equal\n");
}

int abs_comp(int a, int b)
{
	return abs(a) == abs(b)? 1:0;
}

int main(void)
{
	int x = 30;
	int y = -30;

	print_equal(x, y, abs_comp);

	return 0;
}
