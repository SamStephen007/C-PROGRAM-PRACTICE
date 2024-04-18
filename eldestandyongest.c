//program to find the youngest and eldest
#include<stdio.h>
int main()
{
    int eldest=0,youngest=999,i,num,age,ageyoung,ageeldest;
    printf("Enter the number of people:");
    scanf("%d",&num);
        for (i=1;i<=num;i++)
        {
            printf("Enter the age:");
            scanf("%d",&age);
            if(age<eldest)
            {
                eldest = ageeldest;
            }
            if(age>youngest)
            {
                ageyoung = youngest;
            }
            
        }
        printf("The youngest person's age in the list is :%d\n",ageyoung);
        printf("The eldest person in the list is %d\n",ageeldest);
        return 0;
    

    
}