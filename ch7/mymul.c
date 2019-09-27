#include <stdio.h>

int main(void)
{
	int num;
	int cnt = 1;

	printf("몇단을 입력할까요:");
	scanf("%d",&num);

	while (cnt < 10) {
		printf("%d x %d = %d\n", num, cnt, (num*cnt));
		cnt++;
	}
	
	return 0;
}
