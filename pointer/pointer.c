#include <stdio.h>

int main(){
    int anyVar = 64;
    int* p; 
    p = &anyVar;
    printf("p = %d\n", p);
}