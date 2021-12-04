#include <stdio.h>
#include <conio.h>

int main()
{
    int i;
    int j;
    int matrix[3][3];
    int matrix_T[3][3];
    
    // read matrix
    printf("\n Enter elements of the matrix: ");
    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // transpose the matrix
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            // does the transpose operation
            matrix_T[i][j] = matrix[j][i];
        }
    }
    
    // print the matrix elements
    printf("Printing matrix elements: ");
    
    for(i = 0; i < 3; i++)
    {
        printf("\n");
        
        for(j = 0; j < 3; j++)
        {
            printf("\t %d", matrix[i][j]);
        }
    }
    
    printf("\n \n");
    
    // print the transposed matrix elements
    printf("Printing transposed matrix elements: ");
    
    for(i = 0; i < 3; i++)
    {
        printf("\n");
        
        for(j = 0; j < 3; j++)
        {
            printf("\t %d", matrix_T[i][j]);
        }
    }
    return 0;
}