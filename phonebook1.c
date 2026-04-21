#include <stdio.h>
#include <string.h>

struct Person
{
    char name[50];
    char phone[20];
};

int main(void)
{
    struct Person contacts[100];
    int count = 3;

    // initial contacts
    strcpy(contacts[0].name, "Derya");
    strcpy(contacts[0].phone, "0555-111-22-33");

    strcpy(contacts[1].name, "Deniz");
    strcpy(contacts[1].phone, "0555-222-44-55");

    strcpy(contacts[2].name, "Ali");
    strcpy(contacts[2].phone, "0555-333-66-77");

    int choice;

    do
    {
        printf("\n1 - Add contact\n2 - Search contact\n3 - Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Name: ");
            scanf("%49s", contacts[count].name);

            printf("Phone: ");
            scanf("%19s", contacts[count].phone);

            count++;

            printf("Added\n");
        }
        else if (choice == 2)
        {
            char target[50];
            int found = 0;

            printf("Search name: ");
            scanf("%49s", target);

            for (int i = 0; i < count; i++)
            {
                if (strcmp(contacts[i].name, target) == 0)
                {
                    printf("Found\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
            {
                printf("Not found\n");
            }
        }

    }
    while (choice != 3);

    return 0;
}
