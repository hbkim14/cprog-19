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
	int i, result;

	for (i=0; i<ARR_SIZE; i++) {	// arr 초기화
	strcpy(arr[i].wd," ");
	arr[i].cnt = 0;
	}

	while (fgets(buffer, LINE_SIZE-1, fp) != NULL) {
		token = strtok(buffer, " ,.!?\t\n");
		while (token != NULL) {

			for (i=0; i<ARR_SIZE; i++) {	// 이미 등록된 단어 cnt
				result = strcmp(arr[i].wd, token);
				if (result == 0) {
					arr[i].cnt++;
					goto next;
				}
			}

			for (i=0; i<ARR_SIZE; i++) {	// 새로운 단어 등록,  cnt
				result = strcmp(arr[i].wd, " ");
				if (result == 0) {
					strcpy(arr[i].wd, token);
					arr[i].cnt++;
					goto next;
				}
			}
			next:
				token = strtok(NULL, " ,.!?\t\n");
		}
	}

	for (i=0; i<ARR_SIZE; i++) {		// 결과 출력
		result = strcmp(arr[i].wd, " ");
		if (result == 0)
			break;

		printf("%d. %s : %d\n", i, arr[i].wd, arr[i].cnt);
	}

	fclose(fp);
}
