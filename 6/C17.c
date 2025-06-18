#include <stdio.h>

int is_happy_number()
{
	int n, sum = 0, multip = 1;
	scanf("%d", &n);
	
	while (n != 0)
	{
		int b;
		b = n % 10;
		sum += b;
		multip *= b;
		n /= 10;
	}
	
	if (sum == multip)
	{
		printf("YES");
	}else
	{
		printf("NO");
	}
	
	return 0;
	
}

int main()
{
	is_happy_number();
	
	return 0;
}

