#include <stdio.h>

int main() {
    int amount, num_denominations;

    // Get the amount to calculate notes
    printf("Enter the total amount: ");
    scanf("%d", &amount);

    if (amount <= 0) {
        printf("Amount must be greater than zero.\n");
        return 0;
    }

    // Get the number of denominations
    printf("Enter the number of denominations: ");
    scanf("%d", &num_denominations);

    if (num_denominations <= 0) {
        printf("Number of denominations must be greater than zero.\n");
        return 0;
    }

    int denominations[num_denominations];
    int note_count[num_denominations];

    // Input the denominations
    printf("Enter the denominations (from highest to lowest):\n");
    for (int i = 0; i < num_denominations; i++) {
        printf("Denomination %d: ", i + 1);
        scanf("%d", &denominations[i]);
        if (denominations[i] <= 0) {
            printf("Denomination must be a positive value.\n");
            return 0;
        }
        note_count[i] = 0; // Initialize note count for each denomination
    }

    // Calculate the notes for each denomination
    for (int i = 0; i < num_denominations; i++) {
        if (amount >= denominations[i]) {
            note_count[i] = amount / denominations[i];
            amount %= denominations[i];
        }
    }

    // Output the result
    printf("Notes distribution:\n");
    for (int i = 0; i < num_denominations; i++) {
        printf("%d: %d\n", denominations[i], note_count[i]);
    }

    // Check if any amount remains that cannot be represented
    if (amount > 0) {
        printf("Remaining amount %d cannot be represented in the given denominations.\n", amount);
    }

    return 0;
}
