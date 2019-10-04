#include <stdio.h>
#include <sys/time.h>

int main()
{
	struct timeval t_start, t_end;

	//long sum,i;
	register long sum,i;

	gettimeofday(&t_start, NULL);

	sum = 0;
	for (i=1;i<=100000;i++)
		sum += i;

	printf("sum = %ld\n", sum);

	gettimeofday(&t_end, NULL);
	
	printf("%f usecs\n", ((t_end.tv_sec - t_start.tv_sec)*1000000.0 + (t_end.tv_usec - t_start.tv_usec)));

	return 0;
}
