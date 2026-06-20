#include <stdio.h>
#include <stdlib.h>

int main() {

    int number = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &number);

    // Allocating memory and initializing to zero
    float *price = calloc(number, sizeof(float));

    if (price == NULL) {
        printf("Error allocating memory!\n");
        return 1;
    }

    // Input initial prices
    for (int i = 0; i < number; i++) {
        printf("Enter the price #%d : $", i + 1);
        scanf("%f", &price[i]);
    }

    int newNumber = 0;
    printf("\nEnter the number of elements you want to add: ");
    scanf("%d", &newNumber);

    // Resizing memory using a safe temporary pointer
    float *temp = realloc(price, sizeof(float) * (number + newNumber));

    if (temp == NULL) {
        printf("Error reallocating memory!\n");
        return 1;
    }

    // Transferring the address to the main pointer
    price = temp;
    temp = NULL;

    // Input new prices
    for (int i = number; i < (newNumber + number); i++) {
        printf("Enter the price #%d: $", i + 1);
        scanf("%f", &price[i]);
    }

    // Output all prices
    printf("\nAll recorded prices:\n");
    for (int i = 0; i < (newNumber + number); i++) {
        printf("$%.2f\n", price[i]);
    }

    // Freeing memory and resetting pointer
    free(price);
    price = NULL;

    return 0;
}
