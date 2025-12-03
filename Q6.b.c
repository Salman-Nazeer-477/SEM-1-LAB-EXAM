#include<stdio.h>

int main(){
    int size;
    printf("Enter the size of array:");
    scanf("%d", &size);
    int array[size];
    printf("Enter array elements:");
    for(int i = 0; i < size; i++) scanf("%d", &array[i]);
    int largest = array[0];
    for(int i = 0; i < size; i++) if(array[i] > largest) largest = array[i];
    printf("Largest element is %d\n", largest);
    return 0;
}