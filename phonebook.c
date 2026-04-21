#include <stdio.h>
#include <string.h>

struct Person
{
    char name[50];
    char phone[20];
};

int main(void)
{
    struct Person contacts[] =
    {
        {"Derya", "0555-111-22-33"},
        {"Deniz", "0555-222-44-55"},
        {"Ali", "0555-333-66-77"}
    };

    char target[50];
    int found = 0;

    printf("Enter name: ");
    scanf("%49s", target);

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(contacts[i].name, target) == 0)
        {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Found\n");
    else
        printf("Not found\n");

    return 0;
}
