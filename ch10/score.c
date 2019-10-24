#include <stdio.h>
#define ROWS 3
#define COLS 5
double get_avg(int scores[ROWS][COLS],int j)
{	int sum = 0;

	for (int i=0;i<ROWS;i++)
		sum += scores[i][j];
	
	double avg = sum/ROWS;
	return avg;
}
		
int main(void)
{
	int scores[ROWS][COLS] = { {87,98,80,76,3},
	{99,89,90,90,0},
	{65,68,50,49,0} };

	for (int i=0;i<ROWS;i++)	// 최종 성적 
	{
		double total = scores[i][0]*0.3 + scores[i][1]*0.4 +
				scores[i][2]*0.2 + scores[i][3]*0.1 - scores[i][4];
		printf("학생 %d : %f\n",i+1,total);
	}

	// 중간,기말,과제,퀴즈 각각의 평균
	printf("<평균>\n");
	printf("중간고사: %lf\n",get_avg(scores,0));
	printf("기말고사: %lf\n",get_avg(scores,1));
	printf("기말과제: %lf\n",get_avg(scores,2));
	printf("퀴즈점수: %lf\n",get_avg(scores,3));

	return 0;
}
