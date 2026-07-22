
#include <stdio.h>

int main()
{
    int arr[] = {5,7,6,3};
    int n = 4;
    int i;
    float sum = 0, mean;

    for(i = 0; i< n; i++)
    {
        sum = sum + arr[i];
    }

    mean = sum / n;

    printf("Mean = %.2f", mean);

    return 0;
}
