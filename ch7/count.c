#include <stdio.h>

int main(void)
{
	int cnt = 10;
	int time = 7;

	for (int i=1; i<=time; i++) {
		cnt = cnt*4;
	}

	printf("Hours: %d\n",time);
	printf("Count: %d\n",cnt);

	return 0;
}
