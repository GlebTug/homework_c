#include <stdio.h>

int main()
{
	int input, count = 0;
	
	scanf("%d", &input);
	
	while (input !=0)
	{
		input = input / 10;
		count++;
	}	
	
	if (count == 3)
	{
		printf("YES");
	}else
	{
		printf("NO");
	}
	
	
	return 0;
}

