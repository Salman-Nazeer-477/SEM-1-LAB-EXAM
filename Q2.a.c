#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Negative numbers, 0 and 1 are not prime
    if (n <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i * i <= n; i++) {  
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}
