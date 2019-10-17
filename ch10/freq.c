#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int freq[6] = {0};

	for (i=0;i<1000;i++)
		freq[rand()%6]++;

	printf("면	빈도\n");
	for (i=0;i<6;i++)
		printf("%d	%d\n",i+1,freq[i]);

	return 0;
}
