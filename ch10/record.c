#include <stdio.h>
#define SIZE 5

int main(void)
{
	int i,j;
	float tmp;
	float time[SIZE] = {0.0};

	//input
	for (i=0; i<SIZE; i++) {
		printf("학생%d: ",i+1);
		scanf("%f", &time[i]);
	}

	//sort
	for (i=0; i<SIZE; i++) {
		for (j=0; j<SIZE; j++) {
			if (time[i] <= time[j]) {
				tmp = time[i];
				time[i] = time[j];
				time[j] = tmp;
			}
		}
	}

	for (i=0; i<SIZE; i++)
		printf("%d등 %.2f\n",i+1,time[i]);

	return 0;
}
