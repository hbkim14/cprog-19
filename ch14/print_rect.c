#include <stdio.h>

struct rect {
	int w;
	int h;
};

typedef struct rect RECT;

//compare
int compare(RECT x, RECT y)
{
	int s1 = x.w * x.h;		// 첫번째 인자 넓이
	int s2 = y.w * y.h;		// 두번째 인자 넓이

	return s1-s2;
}

//print_rect
void print_rect(RECT x, RECT y, int (*func)(RECT, RECT))
{
	if ( func(x, y) > 0 )
		printf("(%d,%d) (%d,%d)\n", x.w, x.h, y.w, y.h);
	else
		printf("(%d,%d) (%d,%d)\n", y.w, y.h, x.w, x.h);
}		

int main()
{
	RECT x = {2, 4};
	RECT y = {3, 3};

	/* call print_rect */
	print_rect(x, y, compare);
	return 0;
}
