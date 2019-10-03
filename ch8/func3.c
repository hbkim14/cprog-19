#include <stdlib.h>
#include <stdio.h>

int main(void) 
{
	int i;

	for (i=0;i<10;i++)
		printf("%d ",1+rand()%100);
	printf("\n");
	return 0;
}
