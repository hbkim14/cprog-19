#include <stdio.h>

int main(void)
{
	char src[] = "The worst things to eat before you sleep";
	char dst[100];
	int i;

	printf("원본: %s\n",src);

	for (i=0;src[i] != '\0';i++)
		dst[i] = src[i];
	dst[i] = '\0';

	printf("복사본: %s\n",dst);
	return 0;
}
