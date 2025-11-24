#include <stdio.h>

// Function declarations
void checkBalance(float balance);
float deposit(float balance);
float withdraw(float balance);

int main() {
    float balance = 5000.0;  // Initial balance
    int choice;

    while (1) {
        printf("\n====== ATM MENU ======\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                checkBalance(balance);
                break;

            case 2:
                balance = deposit(balance);
                break;

            case 3:
                balance = withdraw(balance);
                break;

            case 4:
                printf("\nThank you for using the ATM!\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}

// Function to check balance
void checkBalance(float balance) {
    printf("\nYour current balance is: ₹%.2f\n", balance);
}

// Function to deposit money
float deposit(float balance) {
    float amount;
    printf("\nEnter amount to deposit: ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid amount!\n");
        return balance;
    }

    balance += amount;
    printf("Amount deposited successfully!\n");
    printf("Updated balance: ₹%.2f\n", balance);
    return balance;
}

// Function to withdraw money
float withdraw(float balance) {
    float amount;
    printf("\nEnter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid amount!\n");
    }
    else if (amount > balance) {
        printf("Insufficient balance!\n");
    }
    else {
        balance -= amount;
        printf("Amount withdrawn successfully!\n");
        printf("Updated balance: ₹%.2f\n", balance);
    }
    return balance;
}