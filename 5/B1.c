#include <stdio.h>

int main(int argc, char **argv)
{
	
	int input;
	
	scanf("%d", &input);
	
	for (int i = 1; i <= input; i++)
	{
		if (input >= 100)
		{
			break;
		}
		printf("%d ", i);
		printf("%d ", i * i);
		printf("%d\n", i * i * i);
	}
	
	return 0;
}

