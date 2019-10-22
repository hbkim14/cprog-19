#include <stdio.h>
#define STUDENTS 5

double get_average(int scores[], int n)
{
	int i;
	int sum = 0;

	for (i=0;i<n;i++)
		sum += scores[i];

	return sum/n;
}

int main(void)
{
	int scores[STUDENTS] = {1,2,3,4,5};
	double avg;

	avg = get_average(scores, STUDENTS);
	printf("평균: %lf\n",avg);
	return 0;
}
