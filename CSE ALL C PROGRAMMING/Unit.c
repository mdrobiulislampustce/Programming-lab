#include <stdio.h>

int main()
{
    float n, kn;

    printf("Enter unit weight in N/m^3: ");
    scanf("%f", &n);

    kn = n / 1000;

    printf("Unit weight in kN/m^3 = %.2f", kn);

    return 0;
}
