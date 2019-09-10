#include <stdio.h>

int main(void)

{
	int students;
	float A;
	float B;
	float C;

	printf("Number of students:");
	scanf("%d", &students);

	A=students*20/100;
	B=students*80/100-A;
	C=100-A-B;

	printf("A:%f\n", A);
	printf("B:%f\n", B);
	printf("C:%f\n", C);

	return 0;
}
