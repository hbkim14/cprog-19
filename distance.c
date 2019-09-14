#include<stdio.h>
int main(void)
{
	double light_speed = 300000;
	double distance = 149600000;
	double time;

	time = distance/light_speed;

	printf("light speend: %fkm/s\n", light_speed);
	printf("distance(Sun ~ Earth): %fkm\n", distance);
	printf("time: %fs\n", time);

	return 0;
}
