#include <stdio.h>

int main() {
    float price;
    int quantity;
    float totalCost;
    printf("Enter the price of the item (between 10 and 100 shillings):");
    scanf("%f", &price); 
    if (price < 10 || price > 100) {
        printf("Invalid price! Please enter a price between 10 and 100 shillings.\n");
        return 1; 
    }
    printf("Enter the quantity of items (max 20): ");
    scanf("%d", &quantity);
    if (quantity < 1 || quantity > 20) {
        printf("Invalid quantity! Please enter a quantity between 1 and 20.\n");
        return 1; 
    }
    totalCost = price * quantity;
    printf("The total cost for %d item(s) at %.2f shillings each is: %.2f shillings\n", quantity, price, totalCost);
    return 0; 
}

