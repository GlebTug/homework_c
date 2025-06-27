#include <stdio.h>

int main(int argc, char **argv)
{
	int a[5];
	float b = 0;
	
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for (int i = 0; i < 5; i++)
	{
		//~ printf("%d", a[i]);
		b += (float)a[i]/5;
	}
	printf("%.3f", b);
	
	return 0;
}

