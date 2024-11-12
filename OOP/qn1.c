#include <stdio.h>
// matrix opration
#define MAX 10 // Max size of matrix

void inputMatrix(int matrix[MAX][MAX], int rows, int cols)
{
    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[MAX][MAX], int rows, int cols)
{
    printf("Matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void subtractMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

void multiplyMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int r1, int c1, int c2)
{
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            result[i][j] = 0;
            for (int k = 0; k < c1; ++k)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void transposeMatrix(int matrix[MAX][MAX], int result[MAX][MAX], int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            result[j][i] = matrix[i][j];
        }
    }
}

int main()
{
    int mat1[MAX][MAX], mat2[MAX][MAX], result[MAX][MAX];
    int r1, c1, r2, c2, choice;

    printf("Enter rows and columns for Matrix 1: ");
    scanf("%d%d", &r1, &c1);
    inputMatrix(mat1, r1, c1);

    printf("Enter rows and columns for Matrix 2: ");
    scanf("%d%d", &r2, &c2);
    inputMatrix(mat2, r2, c2);

    do
    {
        printf("\nMenu:\n");
        printf("1. Add Matrices\n");
        printf("2. Subtract Matrices\n");
        printf("3. Multiply Matrices\n");
        printf("4. Transpose Matrix 1\n");
        printf("5. Transpose Matrix 2\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (r1 == r2 && c1 == c2)
            {
                addMatrices(mat1, mat2, result, r1, c1);
                printf("Result of Addition:\n");
                displayMatrix(result, r1, c1);
            }
            else
            {
                printf("Addition not possible. Matrices must have the same dimensions.\n");
            }
            break;

        case 2:
            if (r1 == r2 && c1 == c2)
            {
                subtractMatrices(mat1, mat2, result, r1, c1);
                printf("Result of Subtraction:\n");
                displayMatrix(result, r1, c1);
            }
            else
            {
                printf("Subtraction not possible. Matrices must have the same dimensions.\n");
            }
            break;

        case 3:
            if (c1 == r2)
            {
                multiplyMatrices(mat1, mat2, result, r1, c1, c2);
                printf("Result of Multiplication:\n");
                displayMatrix(result, r1, c2);
            }
            else
            {
                printf("Multiplication not possible. Columns of Matrix 1 must equal rows of Matrix 2.\n");
            }
            break;

        case 4:
            transposeMatrix(mat1, result, r1, c1);
            printf("Transpose of Matrix 1:\n");
            displayMatrix(result, c1, r1);
            break;

        case 5:
            transposeMatrix(mat2, result, r2, c2);
            printf("Transpose of Matrix 2:\n");
            displayMatrix(result, c2, r2);
            break;

        case 6:
            printf("Exiting program.\n");
            break;

        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}
