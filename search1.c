#include <stdio.h>
#include <string.h>

int main(void)
{
    char names[5][10] = {"Ali", "Ayse", "Derya", "Deniz", "Mehmet"};
    char target[10];
    int found = 0;

    printf("Enter name: ");
    scanf("%9s", target);

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(names[i], target) == 0)
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
