#include <stdio.h>

int main()
{
    int Arr[3][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12}};       
    int newArr[4][3];
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            newArr[i][j] = Arr[j][i];
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", newArr[i][j]);
        }
        printf("\n");
    };
}