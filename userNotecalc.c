#include <stdio.h>

int main() {
    int amount, num_denominations;

    printf("Enter the total amount: ");
    scanf("%d", &amount);

    if (amount <= 0) {
        printf("Amount must be greater than zero.\n");
        return 0;
    }

    printf("Enter the number of denominations: ");
    scanf("%d", &num_denominations);

    if (num_denominations <= 0) {
        printf("Number of denominations must be greater than zero.\n");
        return 0;
    }

    int denominations[num_denominations];
    int note_count[num_denominations];

    printf("Enter the denominations (from highest to lowest):\n");
    for (int i = 0; i < num_denominations; i++) {
        printf("Denomination %d: ", i + 1);
        scanf("%d", &denominations[i]);
        if (denominations[i] <= 0) {
            printf("Denomination must be a positive value.\n");
            return 0;
        }
        note_count[i] = 0; 
    }

    for (int i = 0; i < num_denominations; i++) {
        if (amount >= denominations[i]) {
            note_count[i] = amount / denominations[i];
            amount %= denominations[i];
        }
    }

    printf("Notes distribution:\n");
    for (int i = 0; i < num_denominations; i++) {
        printf("%d: %d\n", denominations[i], note_count[i]);
    }

    if (amount > 0) {
        printf("Remaining amount %d cannot be represented in the given denominations.\n", amount);
    }

    return 0;
}
