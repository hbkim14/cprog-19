#include <stdio.h>
#include <string.h>
#define LINE_SIZE 256
#define ARR_SIZE 30

struct wd_cnt {
	char wd[20];
	int cnt;
};

void main()
{
	char buffer[LINE_SIZE];
	char* token;
	FILE* fp = fopen("london.txt", "r");
	if (fp == NULL) {
		printf("Failed to open file\n");
		return;
	}

	struct wd_cnt arr[ARR_SIZE];
	int i, j;
	int result;

	for (i=0; i<ARR_SIZE; i++) {	// arr 초기화
	strcpy(arr[i].wd," ");
	arr[i].cnt = 0;
	}

	while (fgets(buffer, LINE_SIZE-1, fp) != NULL) {
		token = strtok(buffer, " ,.!?\t\n");
		while (token != NULL) {

			for (j=0; j<ARR_SIZE; j++) {	// 이미 등록된 단어 cnt
				result = strcmp(arr[j].wd, token);
				if (result == 0) {
					arr[j].cnt++;
					goto next;
				}
			}

			for (j=0; j<ARR_SIZE; j++) {	// 새로운 단어 cnt
				result = strcmp(arr[j].wd, " ");
				if (result == 0) {
					strcpy(arr[j].wd, token);
					arr[j].cnt++;
					goto next;
				}
			}
			next:
				i++;
				token = strtok(NULL, " ,.!?\t\n");
		}
	}
	i = 0;
	for (i=0; i<ARR_SIZE; i++) {		// 결과 출력
		result = strcmp(arr[i].wd, " ");
		if (result == 0)
			break;

		printf("%d. %s : %d\n", i, arr[i].wd, arr[i].cnt);
	}

	fclose(fp);
}
