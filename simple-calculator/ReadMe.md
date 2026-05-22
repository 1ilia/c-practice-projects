# Simple Calculator in C

This is a straightforward command-line calculator I wrote in C. It handles basic math operations and was a great way to practice conditional logic and input handling.

## What it does
* Supports addition, subtraction, multiplication, and division.
* Shows results up to 4 decimal places.
* Prevents crashes by checking if you are trying to divide by zero.

## A small detail
If you look at the code, you'll notice a space before %c in scanf(" %c", &action);. I added this because without that space, scanf would accidentally read the Enter key (newline) from the previous input instead of the actual operator. It's a small but important fix to keep the input working smoothly!
