#include <stdio.h>

int power(void)
{
	int n, p;
	int result = 1;
	
	scanf("%d", &n);
	scanf("%d", &p);
	
	for (int i = 1; i <= p; i++)
	{
		result *= n;
	}
	
	return result;
}

int main(int argc, char **argv)
{
	printf("%d", power());
	
	return 0;
}

