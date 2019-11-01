#include <stdio.h>
void swap(int* x_ptr, int* y_ptr);

int main(void)
{
	int a=100,b=200;
	printf("a=%d b=%d\n",a,b);

	swap(&a,&b);

	printf("a=%d b=%d\n",a,b);
	return 0;
}

void swap(int* x_ptr,int* y_ptr)
{
	int tmp;
	tmp = *x_ptr;
	*x_ptr = *y_ptr;
	*y_ptr = tmp;
}
