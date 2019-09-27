#include <stdio.h>

int main(void)
{
	for (int num=1; num<10; num++) {
		for (int cnt=1; cnt<10; cnt++) {
			printf("%d x %d = %d\n", num, cnt, (num*cnt));
		}
	}
	return 0;
}
