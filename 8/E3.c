#include <stdio.h>

int main(int argc, char **argv)
{
	int a[10];
	int n = sizeof(a)/sizeof(a[0]);
	int index_max = 1, index_min = 1;
	
	//~ int i;
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	int min = a[0];
	int max = a[0];
	
	int i;
	
	for (i = 0; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
			index_min = i + 1;
		}
		if (a[i] > max)
		{
			max = a[i];
			index_max = i + 1;
		}
	}
	
	printf("%d %d %d %d", index_max, max, index_min, min);
	
	return 0;
}

