#include <stdio.h>

static void showMenu(void)
{
    printf("\n===== MOBILE MONEY TRANSACTION SYSTEM =====\n");
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. Check Balance\n");
    printf("4. Transaction Summary\n");
    printf("5. Exit\n");
}

static int readInteger(void)
{
    int value;
    scanf("%d", &value);
    return value;
}

static double readDouble(void)
{
    double value;
    scanf("%lf", &value);
    return value;
}

int main(void)
{
    double currentBalance = 0.0;
    double amount;
    int userChoice;
    int successDeposit = 0;
    int successWithdrawal = 0;

    do
    {
        showMenu();
        printf("\nSelect an option: ");
        userChoice = readInteger();

        switch (userChoice)
        {
            case 1:
                printf("Enter deposit amount: ");
                amount = readDouble();

                if (amount <= 0.0)
                {
                    printf("Transaction rejected: Amount must be positive.\n");
                    break;
                }

                currentBalance += amount;
                successDeposit++;
                printf("Deposit successful.\n");
                printf("Current balance: %.2f RWF\n", currentBalance);
                break;

            case 2:
                printf("Enter withdrawal amount: ");
                amount = readDouble();

                if (amount <= 0.0)
                {
                    printf("Transaction rejected: Amount must be positive.\n");
                    break;
                }

                if (amount > currentBalance)
                {
                    printf("Transaction rejected: Insufficient balance.\n");
                    break;
                }

                currentBalance -= amount;
                successWithdrawal++;
                printf("Withdrawal successful.\n");
                printf("Current balance: %.2f RWF\n", currentBalance);
                break;

            case 3:
                printf("Current balance: %.2f RWF\n", currentBalance);
                break;

            case 4:
                printf("\n===== TRANSACTION SUMMARY =====\n");
                printf("Successful deposits: %d\n", successDeposit);
                printf("Successful withdrawals: %d\n", successWithdrawal);
                printf("Current balance: %.2f RWF\n", currentBalance);
                break;

            case 5:
                printf("System terminated.\n");
                break;

            default:
                printf("Invalid choice. Please select a number from 1 to 5.\n");
                break;
        }
    }
    while (userChoice != 5);

    return 0;
}