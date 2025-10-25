
#include <stdio.h>
void deposit(float *balance);
void withdraw(float *balance);
void checkBalance(float balance);

int main() {
    float balance = 0.0;
    int choice;

    printf("=== Simple Banking System ===\n");

    do {
        printf("\n1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                deposit(&balance);
                break;
            case 2:
                withdraw(&balance);
                break;
            case 3:
                checkBalance(balance);
                break;
            case 4:
                printf("Thank you for using our banking system!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 4);
    return 0;
}
void deposit(float *balance) {
    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    if (amount > 0) {
        *balance += amount;
        printf("%.2f deposited successfully.\n", amount);
    } else {
        printf("Invalid deposit amount!\n");
    }
}
void withdraw(float *balance) {
    float amount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount > 0 && amount <= *balance) {
        *balance -= amount;
        printf("%.2f withdrawn successfully.\n", amount);
    } else if (amount > *balance) {
        printf("Insufficient balance!\n");
    } else {
        printf("Invalid withdrawal amount!\n");
    }
}
void checkBalance(float balance) {
    printf("Current Balance: %.2f\n", balance);
}