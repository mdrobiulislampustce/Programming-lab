#include <stdio.h>

int main()
{
    int arr[] = {5,7,6,3};
    int n = 4;
    int i, j, temp;
    float median;

    for(i = 0; i< n-1; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    if (n % 2 == 0 )
    {
        median = (arr[n/2-1] + arr[n/2]) / 2.0;
    }
    else
    {
        median = arr[n/2];
    }

    printf("Median = %.2f", median);

    return 0;
}

