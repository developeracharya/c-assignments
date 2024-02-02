#include <stdio.h>
int digitCounter(int a, int count);
int main(){
    int anyNum;
    printf("Enter any number: ");
    scanf("%d", &anyNum);
    printf("%d/n", digitCounter(anyNum, 0));
}
// FOR O ??
int digitCounter(int a, int count){
    if( a == 0){
        return count;
    }else{
        count++;
        int num = a / 10;
        return digitCounter(num, count);
    }
}