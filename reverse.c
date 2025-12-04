#include<stdio.h>

int main() {

    int arr2[5], j=0;
    int arr1[5] = {34, 54, 20, 10, 15};

    for(int i=4; i>=0; i--) {
        arr2[j]=arr1[i];
        j++;
    }
    for(j=0; j<5; j++){
        printf("%d ", arr2[j]);
    }
    
    return 0;
}