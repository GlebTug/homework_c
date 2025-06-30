#include <stdio.h>

void sort_even_odd(int n, int a[])
{
    int even_index = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            int temp = a[i];
            for (int j = i; j > even_index; j--) {
                a[j] = a[j-1];
            }
            a[even_index++] = temp;
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
	
	//~ sort_even_odd(n, arr);
	
	//~ for (int i = 0; i < n; i++)
	//~ {
		//~ printf("%d ", arr[i]);
	//~ }
	
	//~ return 0;
//~ }
