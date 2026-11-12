#include <stdio.h>

// Function to calculate discount
float calculateDiscount(float purchaseAmount) {
    if (purchaseAmount < 5000) {
        return purchaseAmount * 0.05; // 5%
    } else if (purchaseAmount <= 9999) {
        return purchaseAmount * 0.10; // 10%
    } else {
        return purchaseAmount * 0.15; // 15%
    }
}

int main() {
    float purchaseAmount, discount, finalAmount;

    printf("Enter purchase amount (KSh): ");
    scanf("%f", &purchaseAmount);

    discount = calculateDiscount(purchaseAmount);
    finalAmount = purchaseAmount - discount;

    printf("\nPurchase Amount: KSh %.2f\n", purchaseAmount);
    printf("Discount Amount: KSh %.2f\n", discount);
    printf("Final Amount Payable: KSh %.2f\n", finalAmount);

    return 0;
}