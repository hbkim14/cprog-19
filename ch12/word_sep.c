#include <stdio.h>
#include <string.h>
#define LINE_SIZE 256

void main()
{
	char buffer[LINE_SIZE];
	char seps[] = " ,.\t\n";
	char* token;

	FILE *fp = fopen("london.txt", "r");
	if (fp == NULL) {
		printf("Failed to open file\n");
		return;
	}

	while (fgets(buffer, LINE_SIZE-1, fp) != NULL) {
	// fgets - buffer에 london.txt의 문자열이 저장됨	
		/* do program */
		token = strtok(buffer,seps);
		while (token != NULL) {
			printf("%s\n",token);
			token = strtok(NULL,seps);
		}
	}
	fclose(fp);
}
// 실행: ./word_sep | sort | uniq -c
