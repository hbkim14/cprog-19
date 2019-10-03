#include <stdio.h>

void print_bit(unsigned int n)
{
	unsigned int mask = 1<<31;

	for (int i=1;i<=32;i++) {
		((n&mask) == 0)? printf("0"):printf("1");
		mask >>= 1;
		if ((i%4)==0) printf(" ");
	}
	printf("\n");
}

unsigned int get_bit(unsigned int n, unsigned int i)
{
	unsigned int bit_num;
	unsigned int mask = 1<<(i-1);

	if ((n&mask) == 0)
		bit_num = 0;
	else
		bit_num = 1;

	return bit_num;
}

unsigned int clear_bit(unsigned int n,unsigned int i)
{
	unsigned int mask = 1<<(i-1);
	return n&~mask;
}

unsigned int set_bit(unsigned int n,unsigned int i,unsigned int v)
{
	unsigned int temp = clear_bit(n,i);
	unsigned int mask = 1<<(i-1);

	if (v == 1)
		return temp|mask;
	else 
		return temp;
}

int main()
{
	unsigned int n = 0;
	unsigned int i,v,rv;

	print_bit(n);
	printf("세팅할 비트의 위치와 값을 입력하시오: \n");
	scanf("%u %u", &i, &v);
	n = set_bit(n,i,v);
	rv = get_bit(n,i);
	if (rv != v) {
		printf("비트 세팅이 잘못되었습니다.\n");
		return -1;
	}
	print_bit(n);
	return 0;
}
