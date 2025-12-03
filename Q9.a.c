#include<stdio.h>

int main(){
    int num;
    int sum = 0;
    printf("Enter number:");
    scanf("%d", &num);
    while(num){
        sum = sum + num % 10;
        num = num / 10;
    }
    printf("Sum of digits is %d\n", sum);
    return 0;
}