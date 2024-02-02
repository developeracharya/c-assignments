#include <stdio.h>

int main()
{
    int row,column;
    printf("Enter the order of matrix you want to enter(Row Column): ");
    scanf("%d %d", &row, &column);
    int Arr[row][column];
    // int Arr[3][4] = {{1, 2, 3, 4},
    //                  {5, 6, 7, 8},
    //                  {9, 10, 11, 12}};
    // printf("Enter the order of matrix you want to enter(Row Column): ");
    // scanf("%d %d", &row, &column);
    // Arr[row][column];
    int i,j;
    for(i=0; i<row; i++){
        for(j=0; j<column; j++){
            printf("enter the element in %d row and %d column", i, j);
            scanf("%d\n", &Arr[i][j]);
        }
    }

    for(i=0; i<column; i++){
        for(j=0; j<row; j++){
            printf("%d ", Arr[j][i]);
        }
        printf("\n");
    }
}