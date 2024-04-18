//program to deposit,withdraw and check balance
#include <stdio.h>

int main() {
    int pin = 1234;
    float acc_bal = 57890.70;
    int acc_num = 123456789;
    
    int user_pin;
    printf("Hello Customer\n");
    printf("Enter your 4-digit PIN: ");
    scanf("%d", &user_pin);
    
    if (user_pin == pin) {
        int choice;
        printf("\nMenu:\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                float deposit_amount;
                printf("Enter the deposit amount: ");
                scanf("%f", &deposit_amount);
                acc_bal += deposit_amount;
                printf("Deposit of %.2f successful. New balance: %.2f\n", deposit_amount, acc_bal);
                break;
                
            case 2:
                float withdraw_amount;
                printf("Enter the withdrawal amount: ");
                scanf("%f", &withdraw_amount);
                
                if (withdraw_amount > acc_bal) {
                    printf("Insufficient balance. Withdrawal failed.\n");
                } else {
                    acc_bal -= withdraw_amount;
                    printf("Withdrawal of %.2f successful. New balance: %.2f\n", withdraw_amount, acc_bal);
                }
                break;
                
            case 3:
                printf("Account balance: %.2f\n", acc_bal);
                break;
                
            default:
                printf("Invalid choice.\n");
        }
    } else {
        printf("Invalid PIN. Access denied.\n");
    }
    
    return 0;
}