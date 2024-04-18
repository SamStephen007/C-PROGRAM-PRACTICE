//program to calculate the electric bill
#include <stdio.h>
int main()
{
    int unit;
    printf("Enter the unit geneerated:");
    scanf("%d",&unit);
    if (1<=unit<=50)
        {
            int result1;
            result1 = 30*unit;
            printf("The electric bill of the given units is %d",result1);
        }
    else if (50<unit<=100)
        {
            int result2;
            result2 = 35*unit;
            printf("The electric bill of the given units is %d",result2);
        }
    else if (100<unit<=150)
        {
            int result3;
            result3 = 40*unit;
            printf("The electric bill of the given units is %d",result3);
        }
    else if (150<unit);
        {
            int result4;
            result4 = 50*unit;
            printf("The electric bill of the given units is %d",result4);
        }
        return 0;    

}