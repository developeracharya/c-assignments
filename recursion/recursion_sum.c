#include <stdio.h>

int sumNum(int);
int main(){
    int anyNum;
    printf("Input any number: ");
    scanf("%d", &anyNum);
   printf("%d", sumNum(anyNum));
}

int sumNum(int a){
    if( a < 2){
        return a;
    }else {
        return a + sumNum(a - 1);
    }
}