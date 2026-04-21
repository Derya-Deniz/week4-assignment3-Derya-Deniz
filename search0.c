#include <stdio.h>

int main(void)
{
    int numbers[] = {10, 25, 8, 42, 7, 15, 30};
    int size = 7;
    int target;
    int found = 0;

    printf("Enter number: ");
    scanf("%d", &target);

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == target)
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
