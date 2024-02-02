#include <stdio.h>
// LAB 8
int main(){
    int num1, num2;
    printf("Name: Aditya Acharya\nSection: \"A\"\n");
    printf("Enter any two number: ");
    scanf("%d %d", &num1, &num2);
    int bitAnd, bitOr, bitXor, bitNot1, bitNot2, bitLshift, bitRshift;
    bitAnd = num1 & num2;
    bitOr = num1 | num2;
    bitXor = num1 ^ num2;
    bitNot1 = ~num1;
    bitNot2 = ~num2;
    bitLshift = num1 << 2;
    bitRshift = num2 >> 2;
    printf("Bitwise And: %d\n", bitAnd);
    printf("Bitwise OR : %d\n", bitOr);
    printf("Bitwise XOR: %d\n",bitXor);
    printf("Bitwise Not for 1st number: %d\n",bitNot1);
    printf("Bitwiset Not for 2nd number: %d\n", bitNot2);
    printf("Bitwise Left Shift by 2: %d\n", bitLshift);
    printf("Bitwise Right Shift by 2: %d\n", bitRshift);
    return 0;
}