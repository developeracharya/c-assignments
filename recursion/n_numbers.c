#include <stdio.h>
// int numPrint(int);
int numPrint(int, int);
int main()
{
    int anyNum;
    printf("Enter any number: ");
    scanf("%d", &anyNum);
    printf("%d\n", numPrint(anyNum, anyNum - 1));
}

// int numPrint(int a)
// {
//     if (a == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         printf("%d\n", a);
//         return numPrint(a - 1);
//     }
// }

int numPrint(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        printf("%d\n", a - b);
        return numPrint(a, b - 1);
    }
}