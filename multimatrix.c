//program for matrix matiplication
#include<stdio.h>
int main()
{
    int mat1[10][10],mat2[10][10],mat3[10][10],i,j,k,r1,r2,c1,c2;
    printf("Enter the row & column of matrix1:\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter the row and column of martix2:\n");
    scanf("%d%d",&r2,&c2);
    if(c1==r2)
    {
        printf("Enter the elem")
        for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
        for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
        for(i=0;i<r2;i++)
        for(j=0;j<c1;j++)
        {
            mat3[i][j]=0;
            for(k=0;k<c2;k++)
            {
                mat3[i][j]=mat3[i][j]+mat1[i][k]*mat2[k][j];
            }
        }
        printf("%d",mat3[i][j]);
    }
    return 0;
}