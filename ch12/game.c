#include <stdio.h>
#include <string.h>
#define CNT 20

void check(char str[], char a[], char ch);

int main (void)
{
	char solution[100] = "meet at midnight";
	char answer[100] = "____ __ ________";
	char ch;
	int cnt = 0;

	while (1) {
		printf("Answer: %s\n",answer);
		printf("남은 횟수: %d\n",CNT-cnt);
		printf("단어 추측(종료: 1 입력): ");

		ch = getchar();

		check(solution, answer, ch);
		cnt++;

		if (ch == '1')	// 종료조건
			break;
		if (strcmp(solution,answer) == 0) {	  // 정답
			printf("Answer : %s\n",answer);
			printf("정답입니다!\n");
			break;
		}
		if (cnt == CNT) {	// 남은 시도횟수 = 0
			printf("GAME OVER!\n");
			break;
		}
		getchar();	// 버퍼에 남아있는 \n 소비
		// fflush(stdin);
	}
	return 0;
}

void check(char s[], char a[], char ch)
{
	int i;
	for (i=0; s[i] != '\0'; i++) {
		if (s[i] == ch)
			a[i] = ch;
	}
}
