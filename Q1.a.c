#include <stdio.h>

void main() {
    int total = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0) {
            total += i;
        }
    }
    printf("Sum of odd numbers from 1 to 100 is: %d\n", total);
}
