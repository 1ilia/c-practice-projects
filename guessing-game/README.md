# Number Guessing Game in C

This is a simple interactive guessing game I wrote in C. The program generates a random number between 1 and 100, and the user has to guess it with the help of "TOO HIGH" or "Too LOW" hints.

## What it does
* Generates a dynamic random number every time using the system time as a seed (`srand(time(NULL))`).
* Uses a `do-while` loop to keep the game running until the player gets the correct answer.
* Tracks and displays the total number of attempts it took to win the game.

## What I practiced
* Working with the `<stdlib.h>` and `<time.h>` libraries for pseudo-random number generation.
* Implementing game loops and conditional checks (`if-else` logic).
