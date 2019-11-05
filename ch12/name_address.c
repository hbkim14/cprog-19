#include <stdio.h>

int main()
{
	char name[100];
	char address[100];
	
	printf("이름 입력: ");
	scanf("%s",name);
	printf("현재 주소 입력: ");
	scanf("%s",address);

	puts(name);
	puts(address);
	return 0;
}
