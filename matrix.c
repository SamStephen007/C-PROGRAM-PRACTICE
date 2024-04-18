// program for matrix
#include <stdio.h>
int main()
{
    int row,col,i,j;
    int mat1[10][10],mat2[10][10],mat[10][10];
    printf("Enter the row :");
    scanf("%d",&row);
    printf("Enter the column:");
    scanf("%d",&col);
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the value of matrix 2:\n");
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
           scanf("%d",&mat2[i][j]);
        }
    }
    printf("Enter the addition of two matrix\n");
    for (i=0;i<row;i++)
    { 
        for (j=0;j<col;j++)
        {
            mat[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    return 0; 



}