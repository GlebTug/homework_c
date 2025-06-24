#include <stdio.h>

void print_num(int n)
{
	if (n == 0)
	{
		printf("%d", 0);
		return;
	}
	
	//~ printf("%d ", n % 10);
	if (n / 10 != 0)
	{
		print_num(n/10);
	}
	printf("%d ", n % 10);
}

int main()
{
	int input;
	scanf("%d", &input);
	
	print_num(input);
	
	return 0;
}

