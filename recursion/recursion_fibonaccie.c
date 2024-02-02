#include <stdio.h>
int fibonaccie(int a);
int main()
{
    int anyNum;
    printf("Enter any num: ");
    scanf("%d", &anyNum);
    printf("%d\n", fibonaccie(anyNum));
};


 int fibonaccie(int a){
if( a < 2){
    return a;
}
else{
    return fibonaccie(a-1) + fibonaccie(a-2);
}
}