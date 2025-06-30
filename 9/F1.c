#include <stdio.h>

void  sort_array(int size, int a[])
{
	int temp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;				
			}
		}
	}
}

//~ int main(int argc, char **argv)
//~ {
	//~ int n;
	//~ scanf("%d", &n);
	//~ int arr[n];
	
	//~ for (int i = 0; i < n; i++)
	//~ {
		//~ scanf("%d", &arr[i]);
	//~ }
	
	//~ sort_array(n, arr);
		
	//~ return 0;
//~ }

