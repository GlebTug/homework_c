#include <stdio.h>

void count_digit(char number[])
{
	int counts[10] = {0};
	
	for (int i = 0; number[i] != '\0'; i++)
	{
		if (number[i] >= '0' && number[i] <= '9')
		{
			counts[number[i] - '0']++;
		}
	}
	
	for (int i = 0; i < 10; i++)
	{
		if (counts[i] > 0)
		{
			printf("%d %d\n", i, counts[i]);
		}
	}
}

int main(int argc, char **argv)
{
	char number[1000];
	
	scanf("%s", number);
	count_digit(number);
	
	return 0;
}

