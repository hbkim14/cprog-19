#include <stdio.h>

void swap(char **p_ptr, char **q_ptr)
{
	char* tmp_ptr = *p_ptr;
	*p_ptr = *q_ptr;
	*q_ptr = tmp_ptr;
}

int main()
{
	char *p = "Hello";
	char *q = "Goodbye";

	// Before swap
	printf("%s\n", p);
	printf("%s\n", q);

	swap(&p, &q);

	// After swap
	printf("%s\n", p);
	printf("%s\n", q);

	return 0;
}
