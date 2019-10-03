#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num = 1+(rand()%10);

	switch(num)
	{
		case 1:
		case 2:
		case 3:
			printf("주사위값: 2\n");
			break;
		case 4:
			printf("주사위값: 3\n");
			break;
		case 5:
			printf("주사위값: 4\n");
			break;
		case 6:
			printf("주사위값: 5\n");
			break;
		case 7:
			printf("주사위값: 6\n");
			break;
		default:
			printf("주사위값: 1\n");
			break;
	}

	return 0;
}
