#include <stdio.h>
#include <ctype.h>

int main()
{
	char str[100];
	scanf("%s",str);

	int i = 0;
	while(str[i] != '\0')
	{
		if ( islower(str[i]) )
			str[i] = toupper(str[i]);
		i++;
	}

	printf("%s\n",str);
	return 0;
}
