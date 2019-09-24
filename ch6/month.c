#include<stdio.h>

int main(void)
{
	int month,days;
	printf("month:");
	scanf("%d", &month);

	switch(month)
	{
		case 2:
			days = 28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days = 30;
			break;
		default:
			days = 31;
			break;
	}
	
	printf("days: %d\n",days);
	return 0;
}
