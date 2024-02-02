#include <stdio.h>
int Power(int a, int b);
int main(){
   int num1, num2;
   printf("Enter any base and power: ");
   scanf("%d %d", &num1, &num2);
   printf("%d\n", Power(num1, num2));
}

int Power(int a, int b){
    if(b == 0){
        return 1;
    }else{
        int ans = a * Power(a, b-1);
            return ans;
    }
}