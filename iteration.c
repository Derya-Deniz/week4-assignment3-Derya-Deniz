#include <stdio.h>

int main(void)
{
    int n;

    // input validation
    do
    {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    }
    while (n < 1);

    // pyramid
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
