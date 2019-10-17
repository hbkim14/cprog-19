#include <stdio.h>

int multip(int n, int cnt)
{
	if (cnt>9) return 0;

	printf("%d x %d = %d\n", n, cnt, n*cnt);
	cnt++;
	return multip(n,cnt);
}

int main(void)
{
	int num = 3;
	int cnt = 1;
	multip(num,cnt);
	return 0;
}
