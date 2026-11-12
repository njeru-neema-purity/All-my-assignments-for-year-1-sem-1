#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    double revenue[7];
    double total = 0, average;
    int occupancy[5][10];
    int chain[3][5][10];
    int i, j, k;
    int occupied, vacant, totalOccupied = 0;

    /* 1D Array: Weekly Revenue */
    printf("WEEKLY REVENUE TRACKER\n");

    for (i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%lf", &revenue[i]);
        total += revenue[i];
    }

    average = total / 7;

    printf("Total weekly revenue: KES %.2f\n", total);
    printf("Average daily revenue: KES %.2f\n", average);

    /* 2D Array: Room Occupancy for One Branch */
    srand((unsigned int) time(NULL));

    printf("\nROOM OCCUPANCY - ONE BRANCH\n");

    for (i = 0; i < 5; i++) {
        occupied = 0;
        vacant = 0;

        for (j = 0; j < 10; j++) {
            occupancy[i][j] = rand() % 2;

            if (occupancy[i][j] == 1) {
                occupied++;
            } else {
                vacant++;
            }
        }

        printf("Floor %d: Occupied = %d, Vacant = %d\n",
               i + 1, occupied, vacant);
    }

    /* 3D Array: Three Branches */
    printf("\nMULTIPLE BRANCHES OCCUPANCY\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            for (k = 0; k < 10; k++) {
                chain[i][j][k] = rand() % 2;

                if (chain[i][j][k] == 1) {
                    totalOccupied++;
                }
            }
        }
    }

    printf("Total occupied rooms across all branches: %d\n",
           totalOccupied);

    return 0;
}
