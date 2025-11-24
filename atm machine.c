#include <stdio.h>

// Function declarations
int verifyPIN();
void checkBalance(float balance);
float deposit(float balance);
float withdraw(float balance);

int main() {
    int pinStatus;
    float balance = 5000.0;   // Initial balance
    int choice;

    // Step 1: PIN Authentication
    pinStatus = verifyPIN();

    if (pinStatus == 0) {
        printf("\nAccount locked due to 3 incorrect attempts.\n");
        return 0;
    }

    // Step 2: ATM Menu
    while (1) {
        printf("\n====== ATM MENU ======\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
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

    return 0;
}


// Function to verify PIN
int verifyPIN() {
    int pin;
    int correctPIN = 1234;   // You can change this PIN
    int attempts = 0;

    while (attempts < 3) {
        printf("\nEnter your 4-digit PIN: ");
        scanf("%d", &pin);

        if (pin == correctPIN) {
            printf("PIN verified successfully!\n");
            return 1;   // Success
        } else {
            attempts++;
            printf("Incorrect PIN! Attempts left: %d\n", 3 - attempts);
        }
    }

    return 0;   // Failed after 3 attempts
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
    printf("Deposited successfully!\n");
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
        printf("Withdrawal successful!\n");
        printf("Updated balance: ₹%.2f\n", balance);
    }

    return balance;
}
