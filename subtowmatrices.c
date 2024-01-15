#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int i, j, n;

    printf("Input the size of the square matrix : ");
    scanf("%d", &n);

    int matrix1[n][n], matrix2[n][n], diffMatrix[n][n];

    printf("Input elements in the first matrix:\n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Input elements in the second matrix:\n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }


    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            diffMatrix[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    printf("The First matrix is:\n\n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\nThe Second matrix is:\n\n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    printf("\nThe Subtraction of two matrices is:\n\n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            printf("%d ", diffMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

