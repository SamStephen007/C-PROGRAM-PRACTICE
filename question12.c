//program to calculate the total strength of the college
#include <stdio.h>

int main() 
{
    int boys1, girls1,girls2,boys2,total;

    printf("Total number of department is : %d\n",2);

    // Input the number of boys in 1st department
    printf("Enter the number of boys in 1st department: ");
    scanf("%d", &boys1);

    // Input the number of girls in 1st department
    printf("Enter the number of girls in 1st department: ");
    scanf("%d", &girls1);

    // Input the number of boys in 2nd department
    printf("Enter the number of boys in 2nd department: ");
    scanf("%d",&boys2);

    //Input the number of girls in second department
    printf("Enter the number of girls in 2nd department:");
    scanf("%d",&girls2);

    // Calculate the total strength
    total = boys1 + girls1 + boys2 + girls2;

    // Print the total strength
    printf("Total strength: %d\n", total);


    return 0;
}
