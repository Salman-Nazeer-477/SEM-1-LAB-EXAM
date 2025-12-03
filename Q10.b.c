#include<stdio.h>
int fact(int n);
int main(){
    int n;
    printf("Enter number:");
    scanf("%d", &n);
    int f = fact(n);
    printf("Factorial of %d is %d.\n", n, f);
    return 0;
}

int fact(int n){
    if(n == 0) return 1;
    return n * fact(n - 1);
}