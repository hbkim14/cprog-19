#include <stdio.h>
#include <string.h>

int main()
{
	/* strcpy */
	char cpy[6];
	char str[6] = "Hello";
	strcpy(cpy,str);			// src를 dst로 복사한다.
	printf("원본: %s\n",str);
	printf("복사본: %s\n",cpy);
	
	/* strcat */
	char dst[12] = "Hello";
	char src[6] = "World";
	strcat(dst,src);			// dst가 "HelloWorld"가 된다.
	printf("dst: %s\n",dst);

	/* strcpy, strcat 활용 */
	char string[80];

	strcpy(string,"Hello world from");
	strcat(string," strcpy");
	strcat(string," and");
	strcat(string," strcat!");
	printf("string = %s\n",string);

	/* strcmp 활용 */
	char s1[80];
	char s2[80];
	int result;

	printf("첫번째 단어를 입력하시오:");
	scanf("%s",s1);
	printf("두번째 단어를 입력하시오:");
	scanf("%s",s2);

	result = strcmp(s1,s2);		// 사전적인 순서 비교

	if (result < 0)
		printf("\"%s\"이 \"%s\"보다 앞에 있다.\n",s1,s2);
	else if (result == 0)
		printf("\"%s\"와 \"%s\"는 같다.\n",s1,s2);
	else
		printf("\"%s\"이 \"%s\"보다 뒤에 있다.\n",s1,s2);

	/* strchr 활용 */
	char s[] = "language";
	char c = 'g';
	char* p;
	int loc;

	p = strchr(s,c);		// s 안에서 문자 c를 찾는다.(주소반환)
	loc = (int)(p-s);

	if (p != NULL)
		printf("첫번째 %c가 %d에서 발견되었음\n",c,loc);
	else
		printf("%c가 발견되지 않았음\n",c);

	return 0;
}
