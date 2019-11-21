#include <stdio.h>

struct student {
	int number;
	char name[20];
	double grade;
};

int main(void)
{
	struct student s = {20070001, "홍길동", 4.3};
	struct student* s_ptr;

	s_ptr = &s;

	printf("학번=%d 이름=%s 학점=%f\n",s.number,s.name,s.grade);
	printf("학번=%d 이름=%s 학점=%f\n",(*s_ptr).number,(*s_ptr).name,(*s_ptr).grade);
	printf("학번=%d 이름=%s 학점=%f\n",s_ptr->number,s_ptr->name,s_ptr->grade);

	return 0;
}
