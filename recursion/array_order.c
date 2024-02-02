#include <stdio.h>
int displayArr(int arr[], int, int);
int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 15};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    // printf("%d\n", arr[-1]);
    displayArr(arr, arrSize - 1, arrSize - 1);
}

int displayArr(int arr[], int arrSize, int a)
{
    if (a < 0)
    {
        return 0;
    }
    else
    {
        printf("%d\n", arr[arrSize - a]);
        displayArr(arr, arrSize, a - 1);
    }
}