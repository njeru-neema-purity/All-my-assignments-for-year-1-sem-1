#include <stdio.h>

int main() {
    double balance, amount;

    printf("Enter your starting balance: ");
    scanf("%lf", &balance);

    while (balance > 0) {
        printf("Current balance: KES %.2f\n", balance);
        printf("Enter amount to withdraw: ");
        scanf("%lf", &amount);

        if (amount <= 0) {
            printf("Enter a withdrawal amount greater than zero.\n");
            continue;
        }

        balance -= amount;

        printf("Balance after withdrawal: KES %.2f\n", balance);
    }

    printf("Balance is zero or negative. Withdrawal stopped.\n");

    return 0;
}