#include <stdio.h>

int main(void)
{
	int num = 0;

	while (num <= 100) {
		if ((num%3)==0) {
			printf("%d\n", num);
		}
		num++;
	}

	return 0;
}
