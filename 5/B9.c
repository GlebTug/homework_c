#include <stdio.h>

int main(int argc, char **argv)
{
	int input, number;
	scanf("%d", &input);
	
	while (input != 0)
	{
		number =input % 10;
		if (number / 2)
		{
			printf("YES");
		}else
		{
			printf("NO");
			break;
		}
		input /=10;
	}
	
	return 0;
}

