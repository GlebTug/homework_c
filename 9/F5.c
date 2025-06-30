#include <stdio.h>

int find_max_array(int size, int a[])
{
	int max = a[0];
	
	for (int i = 0; i < size; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}

//~ int main(int argc, char **argv)
//~ {
	//~ int n = 100;
	//~ int input[n];
	//~ for (int i = 0; i < 100; i++)
	//~ {
		//~ scanf("%d", &input[i]);
	//~ }
	
	//~ printf("%d", find_max_array(n, input));
	
	//~ return 0;
//~ }

