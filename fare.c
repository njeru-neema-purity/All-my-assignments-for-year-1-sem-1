#include <stdio.h>

double calculateFare(double distance) {
    return distance * 50;
}

int main() {
    double distance, fare;

    printf("Enter distance travelled in kilometres: ");
    scanf("%lf", &distance);

    if (distance < 0) {
        printf("Invalid distance.\n");
        return 1;
    }

    fare = calculateFare(distance);

    printf("Total fare: KES %.2f\n", fare);

    return 0;
}