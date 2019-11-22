#include <stdio.h>

int main()
{
	char name[20];
	char location[20];

	printf("이름과 거주지를 입력하세요\n");
	scanf("%s %s",name,location);

	printf("%s는 %s에 살고 있습니다\n",name,location);
	return 0;
}
