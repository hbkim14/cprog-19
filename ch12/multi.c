#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	if (argc < 3) {
		printf("Usage: ./multi 3 10\n");
		return 0;
	}

	printf("%s\n",argv[0]);
	printf("%s\n",argv[1]);
	printf("%s\n",argv[2]);

	int num1, num2, result;
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1*num2;
	printf("%d\n",result);
	
	return 0;
}
