#include <stdio.h>

int middle()
{
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	
	return ((a + b) / 2);
}

int main(int argc, char **argv)
{
	printf("%d", middle());
	
	return 0;
}

