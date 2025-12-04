#include<stdio.h>

int main() {
    int arr[5] = {3,-4,5,-8,6};

    for(int i=0; i<5; i++){
        if(arr[i]<0)
        arr[i]=0;
    }
    printf("Updated array:\n");
    for(int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}