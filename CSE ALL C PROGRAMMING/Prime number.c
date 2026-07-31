#include <stdio.h>

int main() {
    int n, i, j, count = 0, prime;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        prime = 1;

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }

        if (prime) {
            count++;
        }
    }

    printf("Total prime numbers from 1 to %d = %d\n", n, count);

    return 0;
}
