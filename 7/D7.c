#include <stdio.h>

void rec(int n)
{
	printf("%d ", n);
	if (n > 1)
	{
		rec(n-1);
	}
}

int main(int argc, char **argv)
{
	int input;
	scanf("%d", &input);
	rec(input);
	
	return 0;
}

