#include <stdio.h>
#include <string.h>

// Define the struct for a person
struct Person {
    char name[50];
    char phone[20];
};

int main() {
    // Create an array of 3 persons (you can make it 5 or 10 as requested)
    struct Person contacts[3] = {
        {"Derya", "0555-111-22-33"},
        {"Deniz", "0555-222-44-55"},
        {"Ali", "0555-333-66-77"}
    };

    char search_name[50];
    int found = 0;

    // Ask user for a name to search
    printf("Enter a name to search: ");
    scanf("%s", search_name);

    // Loop through the array to find the contact
    for (int i = 0; i < 3; i++) {
        // Use strcmp to compare names
        if (strcmp(contacts[i].name, search_name) == 0) {
            printf("Phone number: %s\n", contacts[i].phone);
            found = 1; // Mark as found
            break;     // Stop searching since we found it
        }
    }

    // If the loop finished and we didn't find the name
    if (found == 0) {
        printf("Not found\n");
    }

    return 0;
}
