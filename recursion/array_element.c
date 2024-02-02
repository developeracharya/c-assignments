#include <stdio.h>
int displayArr(int arr[], int);
int main(){
    int arr[] = {1, 2, 3 ,4, 5, 6};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    // printf("%d\n", arr[-1]);
    displayArr(arr, arrSize);
}

int displayArr(int arr[], int arrSize){
    if(arrSize < 1){
        return 0;
    }else{
        printf("%d\n", arr[arrSize - 1]);
        displayArr(arr, arrSize - 1);
    }
}