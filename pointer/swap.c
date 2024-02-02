#include <stdio.h>
void swap(int *a, int *b);
int main(){
    int a = 9;
    int b = 8;
    printf("Before: a = %d b = %d\n", a, b);
    swap(&a, &b);
    printf("After: a = %d b = %d\n", a, b);
}

void swap(int *a,int *b){
    int a1 = *a;
    int b1 = *b;
    *a = b1;
    *b = a1;
};