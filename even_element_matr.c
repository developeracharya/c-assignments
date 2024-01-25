#include <stdio.h>

int main()
{
    int Arr1[3][3] = {{1, 2, 3},
                      {4, 5, 6},
                      {7, 8, 9}};
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++){
            if (Arr1[i][j] % 2 == 0){
                printf("%d ", Arr1[i][j]);
                };
    }
    }
}