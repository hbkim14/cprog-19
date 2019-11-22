#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_NUM 100

enum TYPES { SHIRTS=1, PANTS, DRESS };

struct item {
	int type;

	union {
		char sml[4];
		int num;
	} size;
};

int main()
{
	// product array
	struct item prod[MAX_NUM];

	// file open
	FILE* fp = fopen("item.dat", "r");

	if(!fp) {
		printf("Failed to open file\n");
		return -1;
	};

	// read products
	int type;
	char size[100];
	int cnt=0;

	int j=0;
	while(!feof(fp)) {
		fscanf(fp, "%d %s\n", &type, size);
		cnt++;

		switch (type) {
			/* do program */
			case 1:
				prod[j].type = 1;
				prod[j].size.num = atoi(size);
				j++;
				break;
			case 2:
				prod[j].type = 2;
				strcpy(prod[j].size.sml, size);
				j++;
				break;
			case 3:
				prod[j].type = 3;
				strcpy(prod[j].size.sml, size);
				j++;
				break;
		}
	}

	// print products
	for (int i=0; i<cnt; i++) {
		type = prod[i].type;
		
		switch (type) {
			/* do program */
			case 1:
				printf("셔츠 %d호\n", prod[i].size.num);
				break;
			case 2:
				printf("바지 %s사이즈\n", prod[i].size.sml);
				break;
			case 3:
				printf("원피스 %s사이즈\n", prod[i].size.sml);
				break;
		}
	}

	return 0;
}
