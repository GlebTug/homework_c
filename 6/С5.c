#include <stdio.h>

void sum(void)
{
	int a, b = 0;
	scanf("%d", &a);
	
	for (int i = 1; i <= a; i++)
	{
		b += i;
	}
	
	printf("%d", b);
}

int main()
{
	sum();
	
	return 0;
}

