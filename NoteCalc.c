#include <stdio.h>

void calculateNotes(int amount) {
    int notes_500 = 0, notes_200 = 0, notes_100 = 0, notes_50 = 0;

    if (amount >= 500) {
        notes_500 = amount / 500;
        amount %= 500;
    }

    if (amount >= 200) {
        notes_200 = amount / 200;
        amount %= 200;
    }
    
    if (amount >= 100) {
        notes_100 = amount / 100;
        amount %= 100;
    }

    if (amount >= 50) {
        notes_50 = amount / 50;
        amount %= 50;
    }

    if (amount > 0) {
        printf("Remaining amount %d cannot be represented in these denominations.\n", amount);
    }

    printf("500: %d\n", notes_500);
    printf("200: %d\n", notes_200);
    printf("100: %d\n", notes_100);
    printf("50: %d\n", notes_50);
}

int main() {
    int amount;

    printf("Enter the amount to calculate notes: ");
    scanf("%d", &amount);

    if (amount < 50) {
        printf("Amount must be at least 50.\n");
        return 0;
    }

    calculateNotes(amount);

    return 0;
}
