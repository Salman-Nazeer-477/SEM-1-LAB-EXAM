#include<stdio.h>
int main(){
    int t1 = 0;
    int t2 = 1;
    int t3;
    int n;
    printf("Enter no. of terms to be generated:");
    scanf("%d", &n);
    printf("%d, %d, ", t1, t2);
    for(int i = 2; i < n; i++){
        t3 = t1 + t2;
        printf("%d, ", t3);
        t1 = t2;
        t2 = t3;
    }
}