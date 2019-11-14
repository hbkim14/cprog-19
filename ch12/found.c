#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "language";
	char c = 'g';
	char *p;
	int idx = 0;
	
	while (1) {
		p = strchr(&str[idx],'g');
		if (p == NULL)
			break;
		
		idx = (int)(p-str);
		printf("Found at %d\n",idx);
		idx++;
	}
	
	return 0;
}
