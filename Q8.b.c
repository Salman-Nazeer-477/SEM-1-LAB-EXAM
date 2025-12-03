#include<stdio.h>

int main(){
    int size;
    int key;
    printf("Enter size of array:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements:\n");
    for(int i = 0; i < size; i++) scanf("%d", &arr[i]);
    printf("Enter number to be searched:");
    scanf("%d", &key);
    int index = -1;
    for(int i = 0; i < size; i++)
        if(key == arr[i]) 
            index = i;
    if(index == -1) printf("%d is not in array.\n", key);
    else printf("%d is at index %d.\n", key, index);
    return 0;
}