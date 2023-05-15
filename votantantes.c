#include <stdio.h>
#include <stdlib.h>
int main()

{
    printf("ingrese a\n");
    int A[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("ingrese la b\n");
    int B[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf("el resultado es\n");
    int F[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            F[i][j] = A[i][j] + B[i][j];
        }
    }
    for (int k = 0; k < 3; k++)
    {
        for (int j = 0; j < 3; j++)
        {

            printf("%d ", F[k][j]);
        }
        printf("\n");
    }
    return 0;
}