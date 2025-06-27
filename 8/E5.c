#include <stdio.h>

int main(int argc, char **argv)
{
	int a[10];
	int sum = 0;
	int n = sizeof(a)/sizeof(a[0]);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			sum+=a[i];
		}
	}
	printf("%d", sum);
	
	return 0;
}

