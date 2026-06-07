#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));  // Seed the random number generator using system time

    int guess = 0;  // Declare a variable for user's guess
    int count = 0;  // The count of user's guesses
    int min = 1;
    int max = 100;
    
    int randn = (rand() % (max - min + 1)) + min;  // Define our random number which is between 1 and 100

    do{
        printf("Guess a number between %d and %d: ", min, max);
        scanf("%d", &guess);
        count++;

        if(guess > randn){
            printf("TOO HIGH!\n");
        }
        else if(guess < randn){
            printf("Too LOW!\n");
        }
    }while(guess != randn);

    printf("CORRECT!\n");
    printf("The answer is %d \n", randn);
    printf("It took %d tries\n", count);

    return 0;
}
