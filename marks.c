//program to get the total and average 
#include <stdio.h>
int main()
{
    int total,subject,first,second,third,fourth,fivth;
    float average;
    printf("Enter the total number of subjects :");
    scanf("%d",&subject);
    printf("Enter the mark of first of subject : ");
    scanf("%d",&first);
    printf("Enter the mark of second subject :");
    scanf("%d",&second);
    printf("Enter the mark of third subject :");
    scanf("%d",&third);
    printf("Enter the mark of fourth subject :");
    scanf("%d",&fourth);
    printf("Enter the mark of fivth subject :");
    scanf("%d",&fivth);
    total = first+second+third+fourth+fivth;
    average = (first+second+third+fourth+fivth)/subject;
    printf("The total mark is %d\n",total);
    printf("The average mark is %0.02f\n",average);
    return 0;


}