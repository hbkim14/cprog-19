#include <stdio.h>
#include <ctype.h>
#define SIZE 26

int main()
{
	char str[] = "The worst things to eat before you sleep";
	printf("%d\n",'A'); //65가 출력
	printf("%d\n",'B'-'A'); // 1이 출력됨

	/* count */
	int i = 0;						// 대문자로 변환
	while (str[i] != '\0') 
	{
		if ( islower(str[i]) )
			str[i] = toupper(str[i]);
		i++;
	}

	int count[SIZE] = {0};
	int idx;
	
	i = 0;
	while (str[i] != '\0')
	{
		idx = str[i] - 'A';
		if ( (idx >= 0) && (idx < SIZE) )
			count[idx]++;
		i++;
	}

	printf("문자열: %s\n",str);
	for (i=0;i<SIZE;i++)				// 개수 print
		printf("%c: %d\n",'A'+i,count[i]);

	return 0;
}
