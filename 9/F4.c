#include <stdio.h>

void print_digit(char s[])
{
	int counts[10] = {0};
	
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			counts[s[i] - '0']++;
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

//~ int main(int argc, char **argv)
//~ {
	//~ char number[1000];
	
	//~ fgets(number, sizeof(number), stdin);
	//~ print_digit(number);
	
	//~ return 0;
//~ }

