// program for deposit,withdraw and check bank balance
#include <stdio.h>
int main()
{
    char choice;
    float acc_bal = 23345.56;
    int pin=1234,acc_num = 123456789,user_pin;
    float deposit,withdraw;
    printf("*******HELLO CUSTOMER*********\n");
    printf("Enter your pin :");
    scanf("%d",&user_pin);
    if (pin==user_pin)
    {printf("*********MENU**********\n");
    printf("1.Deposit(D) \n 2.With Draw(W) \n 3.Check Balance(C)\n");
    printf("Enter the choice:");
    scanf("%s",&choice);
    switch (choice)
    {
        case 'D':
        printf("Enter the deposital amount:");
        scanf("%f",&deposit);
        acc_bal += deposit;
        printf("The account balance is %f",acc_bal);
        break;
        case 'W':
        printf("Enter the with draw amount :");
        scanf("%f",&withdraw);
        if (withdraw>acc_bal)
        {
        printf("not enough minimum bank balance");
        }
        else
        {
        acc_bal = acc_bal-withdraw;
        printf("The account balance after withdraw is %f",acc_bal);
        break;
        }
        case 'C':
        printf("The balance in your account is %f",acc_bal);
        break;
        default :
        printf("INVALID CHARACTER");
        break;
    }
    }
    else
        printf("INVALID PIN");
        return 0;
    
    
}