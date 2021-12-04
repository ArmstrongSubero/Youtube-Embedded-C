#include <stdio.h>
#include <conio.h>

int main()
{
    int i;
    int j;
    int k;
    
    int rows1, cols1, rows2, cols2, mul_rows, mul_cols;
    
    int matrix1[5][5];
    int matrix2[5][5];
    int matrix_mul [5][5];
    
    // step 0.
    // get input from user
    printf("Enter number of rows in first matrix: ");
    scanf("%d", &rows1);
    
    printf("Enter number of cols in first matrix: ");
    scanf("%d", & cols1);
    
    printf("Enter number of rows in second matrix: ");
    scanf("%d", &rows2);
    
    printf("Enter number of cols in second matrix: ");
    scanf("%d", & cols2);
    
    
    if(cols1 != rows2)
    {
        printf("Number of cols in matrix1 must equal number of rows in second matrix");
        getch();
        exit(0);
    }
    
    mul_rows = rows1;
    mul_cols = cols2;
    
    // step 1.
    // read in first matrix elements
    printf("Reading first matrix elements please enter: ");
    
    for(i = 0; i < rows1; i++)
    {
        for(j = 0; j < cols1; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    // step 2.
    // read in second matrix elements
    printf("Reading second matrix elements please enter: ");
    
    for(i = 0; i < rows2; i++)
    {
        for(j = 0; j < cols2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    // step 3.
    // perform the multiplication
    for(i = 0; i < mul_rows; i++)
    {
        for(j = 0; j < mul_cols; j++)
        {
            matrix_mul[i][j] = 0;
            
            for(k = 0; k < mul_cols; k++)
            {
            	// where multiplication takes place 
                matrix_mul[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    
    // step 4.
    // print the results of the multiplication
    printf("The result of multiplication is: ");
    for(i = 0; i < mul_rows; i++)
    {
        printf("\n");
        
        for(j = 0; j < mul_cols; j++)
        {
            printf("\t %d", matrix_mul[i][j]);
        }
    }
    
    return 0;
}