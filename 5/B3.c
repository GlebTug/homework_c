#include <stdio.h>

int main()
{
	int a, b, multip, sum = 0;
	scanf("%d%d", &a, &b);
	
	for (int i = a; i <= b ; i++)
	{
		multip = i * i;
		sum +=multip;
	}
	printf("%d ", sum);

	return 0;
}
