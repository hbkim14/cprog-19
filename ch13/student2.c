#include <stdio.h>

struct student {
	int id;
	char name[20];
	int grade;
};

int equal1 (struct student s1, struct student s2)
{
	if (s1.id == s2.id)
		printf("동일한 학생입니다.\n");
	else
		printf("동일한 학생이 아닙니다.\n");
}

int equal2 (struct student* s1_ptr, struct student* s2_ptr)
{
	if (s1_ptr->id == s2_ptr->id)
		printf("동일한 학생입니다.\n");
	else
		printf("동일한 학생이 아닙니다.\n");
}

int inc_grade(struct student* s1_ptr, struct student* s2_ptr)
{
	s1_ptr->grade++;
	s2_ptr->grade++;
}

int main(void)
{
	struct student s1, s2;
	struct student* s1_ptr = &s1;
	struct student* s2_ptr = &s2;
	int result;

	printf("학생 1 (학번,이름,학점): ");
	scanf("%d %s %d", &s1.id, s1.name, &s1.grade);

	printf("학생 2 (학번,이름,학점): ");
	scanf("%d %s %d", &s2.id, s2.name, &s2.grade);

	equal1(s1,s2);
	equal2(s1_ptr,s2_ptr);

	inc_grade(s1_ptr,s2_ptr);
	printf("학생1 학점: %d\n",s1.grade);
	printf("학생2 학점: %d\n",s2.grade);

	return 0;
}
