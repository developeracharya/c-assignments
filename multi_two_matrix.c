// WAP TO MULTIPLY TWO MATRIX
#include <stdio.h>

int main()
{
    int Arr1[3][3] = {{1, 2, 3},
                      {4, 5, 6},
                      {7, 8, 9}};

    int Arr2[3][2] = {{1, 2},
                      {3, 4},
                      {5, 6}};
    int ArrNew[3][2];
    int i, j, k, sum, mulVar = 0;
    for (i = 0; i < 3; i++)
    {
        for (k = 0; k < 2; k++)
        {
            for (j = 0; j < 3; j++)
            {
                mulVar += (Arr1[i][j] * Arr2[j][k]);
            }
            k==1? printf("%d\n", mulVar):printf("%d ", mulVar);
            mulVar = 0;
        }
    }
}