#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter three numbers:");
    scanf("%d %d %d", &a, &b, &c);
    int largest;
    if(a > b)
        if(a > c)
            largest = a;
    else if(b > c)
        largest = b;
    else largest = c;

    printf("%d is largest\n", largest);
    return 0;
}