#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[2][2] = {{1, 2}, {3, 4}};
    
    int i, j;
    
    // prints out the elements within our matrix
    for(i = 0; i < 2; i++)
    {
        printf("\n");
        
        for(j = 0; j < 2; j++)
        {
            printf("%d\t", arr[i][j]);
        }
    }
    
    
    return 0;
}