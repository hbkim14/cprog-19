#include <stdio.h>

int main()
{
	char name[100];

	printf("정보를 입력하세요.\n");
	scanf("%[A-Za-z]",name);

	printf("이름: %s\n",name);
	return 0;
}
