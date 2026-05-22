# Grid Generator in C

This is a simple C program that takes the number of rows, columns, and a character symbol from the user, and uses nested loops to print a perfect grid/rectangle in the terminal.

## What it does
* Asks the user how many rows and columns they want.
* Accepts any character or symbol (like `*`, `#`, or `@`) to build the grid.
* Uses nested `for` loops to handle the 2D grid rendering.

## Inside the code
Just like my calculator project, I used a leading space in `scanf(" %c", &symbol);`. Since the user presses "Enter" after typing the number of columns, that newline character stays in the input buffer. Adding that extra space tells `scanf` to skip the newline and actually wait for the symbol input.