#include <stdio.h>

int main() {
    int choice, quantity, totalAmount = 0;
    char moreOrders;

    do {
        printf("1. Pizza\n   Price: 180rs/pcs\n");
        printf("2. Burger\n   Price: 100rs/pcs\n");
        printf("3. Dosa\n  price: 120rs/pcs\n");
        printf("4. Idli\n   Price: 5rs/pcs\n");

        printf("\nPlease enter your choice...: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You have selected Pizza.\n");
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                totalAmount += 180 * quantity;
                break;
            case 2:
                printf("You have selected Burger.\n");
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                totalAmount += 100 * quantity;
                break;
            case 3:
                printf("You have selected Dosa.\n");
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                totalAmount += 100 * quantity;
                break;
            case 4:
                printf("You have selected Idli.\n");
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                totalAmount += 5 * quantity;
                break;
            default:
                printf("Invalid choice.\n");
        }

        printf("Amount: %d\n", totalAmount);

        printf("\nDo you want to place more orders? (y & n): ");
        scanf(" %c", &moreOrders);
    } while (moreOrders == 'y');

    printf("\nTotal Amount is = %d\n", totalAmount);

    return 0;
}
