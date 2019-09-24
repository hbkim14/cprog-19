#include <stdio.h>
#define BIT_PER_BYTE 8

int main()
{
	unsigned int num;
	scanf("%u",&num);

	unsigned int shift_cnt = 0;
	unsigned int mask = 1;
	unsigned int count = 0;
	
	while (shift_cnt < sizeof(unsigned int)*BIT_PER_BYTE) {
		if ((num&mask)!=0)
			count++;
		mask = mask<<1;
		shift_cnt++;
	}
	printf("count: %d\n", count);

	return 0;

}
