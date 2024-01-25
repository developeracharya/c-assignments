#include <stdio.h>

int main()
{
    int marksArr[5] = { 50,
                        50,
                        50,
                        50,
                        50
    };
    int greatest, smallest, i;
    smallest = greatest = marksArr[0];
    int arrSize = sizeof(marksArr)/sizeof(marksArr[0]);
    for(i = 0; i<arrSize; i++){
        if(marksArr[i] <= smallest){
            smallest = marksArr[i];
        }
        if(marksArr[i] >= greatest){
            greatest = marksArr[i];
        }
    }
    printf("Greatest: %d", greatest);
    printf("Smallest: %d", smallest);
    return 0;
};