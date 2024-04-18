//program for matrix multiplication
#include<stdio.h>
int main()
{
    int mat1[10][10], mat2[10][10], mat3[10][10],r1,c1,r2,c2,i,j,k;
    printf("enter the row &col for mat1[10][10]:\n");
    scanf("%d %d",&r1,&c1);
    printf("enter the row &col for mat2[10][10]:\n");
    scanf("%d %d",&r2,&c2);
    if(c1==r2)
    {
        printf("Enter the elements of matrix1:\n");
        for(i=0;i<r1;i++)
        {
          for(j=0;j<c1;j++)
            {
                scanf("%d",&mat1[i][j]);
            }
        }
        printf("Enter the elements of marix2:\n");
           for(i=0;i<r2;i++) 
           {
                for(j=0;j<c2;j++)
                {
                    scanf("%d",&mat2[i][j]);
                }
           }    
           printf("The answer is:\n");

                for(i=0;i<r1;i++)
                {
                    for(j=0;j<c2;j++) 
                    {
                    mat3[i][j]=0; 
                
                for(k=0;k<c1;k++)
                {
                    mat3[i][j]=mat3[i][j]+mat1[i][k]*mat2[k][j];
                }
                printf("%d\t",mat3[i][j]);
                    }
            
            printf("\n");
                }
    }
    else
        {
        printf("CANNOT PERFORM THE MATRIX");
        }
    return 0;
}

