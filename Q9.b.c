#include<stdio.h>

int main(){
    int size;
    printf("Enter the size of array:");
    scanf("%d", &size);
    int array[size];
    printf("Enter array elements:");
    for(int i = 0; i < size; i++) scanf("%d", &array[i]);
    int smallest = array[0];
    for(int i = 0; i < size; i++) if(array[i] < smallest) smallest = array[i];
    printf("Smallest element is %d\n", smallest);
    return 0;
}