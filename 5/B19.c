#include <stdio.h>

int main()
{
	int input, number = 0, sum = 0;
	//~ int sum = 0;
	scanf("%d", &input);
		
	while (input != 0)
	{
		number = input % 10;
		input = input / 10;
		sum+=number;
	}
	
	if (sum == 10)
	{
		printf("YES");
	}else
	{
		printf("NO");
	}
		
	return 0;
}

