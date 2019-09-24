#include <stdio.h>

int main(void)
{
	int a,b,c;
	double score;
	
	printf("midterm, final, report:");
	scanf("%d %d %d", &a,&b,&c);

	score = (double)a/60.0*30.0 + (double)b/70.0*30.0 + (double)c/50.0*40.0;

	printf("Score: %f\n", score);

	return 0;
}
