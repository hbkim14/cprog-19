#include <stdio.h>

union get_id {
	int id1;
	int id2;
};

struct student {
	union get_id id;
	char name[20];
};

int main()
{
	struct student s1;
	int tmp;

	printf("이름:");
	scanf("%s",s1.name);
	printf("ID 저장 선택(학번:1, 주민등록번호:2) :");
	scanf("%d",&tmp);

	printf("ID 입력: ");
	switch (tmp) {
		case 1:
			scanf("%d",&s1.id.id1);
			printf("이름: %s\n",s1.name);
			printf("ID(학번): %d\n",s1.id.id1);
			break;
		case 2:
			scanf("%d",&s1.id.id2);
			printf("이름: %s\n",s1.name);
			printf("ID(주민등록번호): %d\n",s1.id.id2);
			break;
		default:
			printf("잘못된 입력입니다\n");
			break;
	}

	return 0;
}
