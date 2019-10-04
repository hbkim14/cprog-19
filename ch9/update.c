#include <stdio.h>
int item = 100;

int update(int inc, int dec)
{
	printf("입고:");
	scanf("%d",&inc);
	printf("판매:");
	scanf("%d",&dec);

	item = item + inc - dec;

	return item;
}

void print_item() {
	printf("재고:%d\n",item);
}

int main()
{
	int opt;
	static int inc, dec;

	while (1) {
		printf("변경:1, 재고확인:2, 종료:3\n");
		scanf("%d",&opt);
	
		switch (opt) {
			case 1:
				update(inc,dec);
				break;
			case 2:
				print_item();
				break;
			case 3:
				goto end;
			default:
				printf("잘못 선택함\n");
		}
	}

	end:
		return 0;
}
