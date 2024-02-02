#include <stdio.h>
 int factFun(int);
 int main(){
    int anyNum;
    printf("Input any number: ");
    scanf("%d", &anyNum);
    printf("The factorial of %d is: %d\n", anyNum, factFun(anyNum));
 }

 int factFun(int a){
    if(a == 0){
        return 1;
    }else {
        int fact= a* factFun(a-1);
        return fact;
    }
 }