#include <stdio.h>

void number(int n)
{
	if (n == 0)
	{
		printf("%d", 0);
		return;
	}
	
	printf("%d ", n % 10);
	if (n / 10 != 0)
	{
		number(n/10);
	}
	//~ printf("%d ", n % 10);
}

int main()
{
	int input;
	scanf("%d", &input);
	
	number(input);
	
	return 0;
}

