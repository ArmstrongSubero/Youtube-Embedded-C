#include <stdio.h>
#include <conio.h>

int main()
{
    int i;
    int j;
    int matrix[3][3];
    
    // read in matrix elements
    printf("Reading matrix elements please enter: ");
    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    
    // operation
    
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
    
    return 0;
}