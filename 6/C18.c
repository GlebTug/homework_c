#include <stdio.h>

int is_digit()
{
	char c;
	int counter = 0;
		
	while ((c = getchar()) != '.')
	{
		if (c >= '0' && c <= '9')
		{
			counter++;
		}
	}
	
	return counter;
}

int main()
{
	printf("%d", is_digit());
	
	return 0;
}

