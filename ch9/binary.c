#include <stdio.h>
int count(unsigned int x, int cnt)
{	
	if (x == 0) return cnt;

	int mask, key;
	mask = 1;
	key = mask&x;
	if (key == 1) {
		cnt++;
		return count(x>>1,cnt);
	}
	else return count(x>>1,cnt);
}

int main(void)
{
	unsigned int num;
	int cnt = 0;
	printf("숫자를 입력하시오:");
	scanf("%d",&num);

	printf("2진수 표현에서 1의 개수:%d\n",count(num,cnt));
	return 0;
}
