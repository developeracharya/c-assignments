#include <stdio.h>

int main(){
    int marksArr[5] = {70, 60, 90, 80, 50};
    int i, j, temp;
    for(i = 0; i < 5; i++){
        for(j=i+1; j < 5; j++){
            if(marksArr[i] > marksArr[j]){
                temp = marksArr[i];
                marksArr[i] = marksArr[j];
                marksArr[j] = temp;
            };
        };
    };
    for(i = 0; i<5; i++){
        printf("%d", marksArr[i]);
    };
};