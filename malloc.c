#include <stdio.h>
#include <stdlib.h>

int main(){

    int count = 0;
    printf("Enter the count of elements: ");
    scanf("%d", &count);

    // Dynamically allocate memory using malloc
    int *numbers = malloc(count * sizeof(int));

    // Check if the memory allocation was successful
    if(numbers == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input elements
    for(int i = 0; i < count; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Output elements
    printf("\nYou entered:\n");
    for(int i = 0; i < count; i++){
        printf("%d\n", numbers[i]);
    }

    // Free the allocated memory and reset pointer
    free(numbers);
    numbers = NULL;

    return 0;
}