#include <stdio.h>

int main(void)
{
	int num[5] = {3,5,7,9,10};
	int sum = 0;
	double avg;

	for (int i=0; i<5; i++)
		sum += num[i];

	avg = (double)sum/5.0;
	printf("%.2f\n",avg);
	
	return 0;
}
