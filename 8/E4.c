#include <stdio.h>

void bubbleSort(int arr[], int n)  
{
    for (int i = 0; i < n - 1; i++)
    {
        int swapped = 0;
        for (int j = 0; j < n - i - 1; j++)  
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) { break; }
    }
}

int main(int argc, char **argv)
{
    int n = 10;
    int a[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    bubbleSort(a, n);
    
    //~ for (int i = 0; i < n; i++)
    //~ {
        //~ printf("%d ", a[i]); 
    //~ }
    
    //~ printf("%d" , a[n-2]);
    
    int sum = 0;
    
    sum = a[n-1] + a[n-2];
    
    printf("%d" , sum);
    
    return 0;
}
