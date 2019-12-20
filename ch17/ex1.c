#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* list;
	list = (int*)malloc(3*sizeof(int));

	if (list == NULL) {		// 반환값이 NULL인지 검사
		printf("동적 메모리 할당 오류\n");
		exit(1);
	}
	list[0] = 10;
	list[1] = 20;
	list[2] = 30;

	for (int i=0; i<3; i++)
		printf("%d\n", list[i]);

	free(list);		// 동적 메모리 해제
	return 0;
}
