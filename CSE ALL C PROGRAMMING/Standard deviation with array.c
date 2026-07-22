#include <stdio.h>
#include <math.h>

int main()
{
    int arr[] = {5,7,6,3};
    int n = 4;
    int i;
    float mean, sum = 0, sd = 0;

    for(i = 0; i<n; i++)
    {
        sum = sum + arr[i];
    }

    mean = sum / n;

    for(i = 0; i<n; i++)
    {
        sd = sd + pow(arr[i] - mean, 2);
    }

    sd = sqrt(sd/n);

    printf("Standard Deviation = %.2f", sd);

    return 0;
}

