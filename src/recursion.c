#include <stdio.h>

// Recursive function to print the pyramid
void draw(int n) {
    // Base case: if n is 0, stop the recursion
    if (n <= 0) {
        return;
    }

    // Call the function again with n-1 to print previous rows first
    draw(n - 1);

    // Print '#' for the current row
    for (int i = 0; i < n; i++) {
        printf("#");
    }
    printf("\n");
}

int main() {
    int height;

    // Get input from the user
    printf("Enter the height of the pyramid: ");
    scanf("%d", &height);

    // Start the recursive function
    draw(height);

    return 0;
}
