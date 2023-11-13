#include <stdio.h>

void multiplyMatrices(int matrix1[3][2], int matrix2[3][2], int result[3][2])
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            int sum = 0;
            for (int k = 0; k < 2; k++) {
                sum += *(*(matrix1 + i) + k) * *(*(matrix2 + k) + j);
            }
            *(*(result + i) + j) = sum;
        }
    }
}

int main()
{
    int matrix1[3][2];
    int matrix2[3][2];
    int result[3][2];

    // Input for matrix1
    printf("Enter the elements of the first 3x2 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input for matrix2
    printf("Enter the elements of the second 3x2 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Matrix multiplication
    multiplyMatrices(matrix1, matrix2, result);

    // Display the result
    printf("Resultant matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
