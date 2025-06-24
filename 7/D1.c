#include <stdio.h>

void print(int n)
{
	int sum = 0;
	if (n > 1)
	{
		print(n-1);
		sum+=n;
	}
	printf("%d ", n);
	printf("%d ", sum);
}

int main(int argc, char **argv)
{
	int a;
	scanf("%d", &a);
	print(a);
	return 0;
}

