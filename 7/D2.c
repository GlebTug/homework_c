#include <stdio.h>

int sum(int n)
{
		
	if (n == 0)
	{
		return 0;
	}
	
	return n + sum(n - 1);
}

int main()
{
	int input;
	scanf("%d", &input);
	
	printf("%d", sum(input));
	
	return 0;
}

