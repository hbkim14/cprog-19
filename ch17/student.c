#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <conio.h>

//#define ESC 0x1b

typedef struct node {
	char name[20];	// 학생 이름 저장할 필드 추가
	int score;
	struct node* next;
} node_t;

node_t* search_node(char* name, node_t* list_head)
{
	node_t* tmp = list_head;
	while(tmp) {
		if (!strcmp(tmp->name, name)) {	// 검색할 학생 찾음
			return tmp;
		}
		tmp = tmp->next;	// 다음 노드로 이동하여 검색 진행
	}
	return tmp;
}

void main()
{
	FILE* fp = NULL;
	node_t* new_node;
	node_t* tmp_node;
	node_t* list_head = NULL;
	char name[20];
	char input = '0';

	// 파일 열기
	fp = fopen("student.dat", "r+");
	if (fp == NULL) {
		printf("Cannnot open file\n");
		return;
	}

	// 학생 정보 읽기
	while (!feof(fp)) {
		new_node = (node_t*) malloc(sizeof(node_t));
		fscanf(fp, "%s %d\n", new_node->name, &new_node->score);

		// 노드 추가
		new_node->next = list_head;
		list_head = new_node;
	}

	// 성적 조회
	while (input != 'q') {
		printf("--------------------------------\n");
		printf("성적조회(이름): ");
		scanf("%s", name);
		tmp_node = search_node(name, list_head);
		if (tmp_node)
			printf("%s: %d점\n", tmp_node->name, tmp_node->score);
		else
			printf("찾는 학생이 없습니다\n");
		printf("종료는 q, 계속은 c 키를 누르세요: ");
		getchar();
		scanf("%c",&input);
	}

	// 메모리 해제 및 파일 닫기
	while (list_head) {
		tmp_node = list_head;
		list_head = list_head->next;
		free(tmp_node);
	}
	fclose(fp);
}
