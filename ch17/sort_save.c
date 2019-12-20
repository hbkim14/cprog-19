#include <stdio.h>
#include <stdlib.h>
#define MAX_COUNT 5

typedef struct node {
	int score;
	struct node* next;	// 다음 노드의 위치를 가리킴
} node_t;

void print_list(struct node* list_head)
{
	// 리스트의 내용을 모두 출력
	while (list_head != NULL) {
		printf("%d => ", list_head->score);
		list_head = list_head->next;
	}
	printf("\n");
}

void main()
{
	int count = 0;
	int tmp_score = 0;
	node_t* new_node;	// 새로운 노드 위치 저장할 포인터
	node_t* list_head = NULL;	// 리스트의 시작 노드
	node_t* next_p;
	node_t* prev_p;

	while (count < MAX_COUNT) {
		// 사용자로부터 입력
		printf("score %d: ", count);
		scanf("%d", &tmp_score);

		// 1. 노드 생성
		new_node = 
			(node_t*) malloc(sizeof(node_t));
		new_node->score = tmp_score;

		// 2. 노드 삽입 위치 검색
		next_p = list_head;	// 리스트 헤드부터 검색
		prev_p = NULL;		// prev_p는 NULL로 초기화

		while (next_p) {
			if (next_p->score < new_node->score)
				break;
			prev_p = next_p;
			next_p = next_p->next;
		}

		// 3. 노드 삽입
		new_node->next = next_p;

		if (prev_p) {	// 중간에 삽입
			prev_p->next = new_node;
		} else {		// 처음에 삽입
			list_head = new_node;
		}
		print_list(list_head);
		count++;
	}
}
