#include <stdio.h>
int main(void)
{
	double light_speed = 300000;
	double distance = 149600000;
	int time;
	int minutes;
	int seconds;

	time = distance/light_speed;
	minutes = time/60;
	seconds = time%60;

	printf("Light speed: %fkm/s\n", light_speed);
	printf("Distance(Sun~Earth): %fkm\n", distance);
	printf("Time: %dm %ds\n", minutes, seconds);

	return 0;
}
