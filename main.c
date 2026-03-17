#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[10][10],transpose[10][10],rows,cols,i,j;

    // Get matrix dimensions from user
    printf("Enter number of rows:\n");
    scanf("%d",&rows);

    printf("Enter number of columbs:\n");
    scanf("%d",&cols);

    // Get matrix elements from user
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("Matrix[%d][%d]",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    // Print original matrix
    printf("Original Matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%4d",matrix[i][j]);

        }
        printf("\n");
    }

    // Calculate transpose
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            transpose[j][i]=matrix[i][j];
        }

    }

    // Print transpose matrix
    printf("Transpose Matrix:\n");
    for(i=0;i<cols;i++)
    {
        for(j=0;j<rows;j++)
        {
            printf("%4d",transpose[i][j]);

        }
        printf("\n");
    }

    return 0;
}
