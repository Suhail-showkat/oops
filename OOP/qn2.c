// program for simulating banking system

#include <stdio.h>

void checkBalance(float balance)
{
    printf("your total balance is $%f:", balance);
}

void depositBalance(float *balance)
{
    int deposit;
    printf("Enter the amount you want to deposit:");
    scanf("%d", &deposit);
    *balance += deposit;
    printf("Your total balance is $%f:", *balance);
}

void withdraw(float *balance)
{
    int withdraw;
    printf("Enter the amount you want to withdraw:");
    scanf("%d", &withdraw);
    if (*balance <= 0)
        printf("Can't withdraw\n");
    else
    {
        *balance -= withdraw;
    }
    printf("Remaining balance is $%f:", *balance);
}
int main()
{
    float balance = 0.0;
    int choice;

    do
    {
        printf("\nMenu:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            checkBalance(balance);
            break;

        case 2:
            depositBalance(&balance);
            break;

        case 3:
            withdraw(&balance);
            break;

        case 4:
            printf("Exiting.");
            break;
        }

    } while (choice != 4);
    return 0;
}
