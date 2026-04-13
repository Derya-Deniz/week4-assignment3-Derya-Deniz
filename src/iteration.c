#include <stdio.h>

int main() {
    int n;

    // Ask the user for a positive integer until it is valid
    do {
        printf("Enter a positive integer n: ");
        scanf("%d", &n);
    } while (n < 1);

    // Outer loop for each row
    for (int i = 1; i <= n; i++) {
        
        // Inner loop to print # for the current row
        for (int j = 0; j < i; j++) {
            printf("#");
        }
        
        // Move to the next line after finishing the row
        printf("\n");
    }

    return 0;
}
