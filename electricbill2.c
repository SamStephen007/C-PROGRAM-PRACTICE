//program for calculate the electric bill
#include<stdio.h>
int main()
{
    char name[25];
    int id;
    float units,surcharge = 0.15;
    printf("Enter your name :");
    scanf("%s",&name);
    printf("Enter your id :");
    scanf("%d",&id);
    printf("Enter the unit consumed:");
    scanf("%f",&units);
    printf("Customer name : %s\n",name);
    printf("Customer ID : %d\n",id);   
    if (units<=199)
    {
        printf("Total current bill for the unit consumed is %f",units*1.20);
    }
    else if (200<= units <400)
    {
        printf("Total current bill for the unit consumed is %f",units*1.50);
    }
    else if (400<= units <600)
    {
        printf("Total current bill for the unit consumed is %f",units*1.80*surcharge);
    }
    else if (units >= 800)
    {
        printf("Total current bill for the unit consumed is %f",units*2.00*surcharge);
    }
    else if (units<=100)
    {
        printf("Total current bill for the unit consumed is %f",100);
    }

}