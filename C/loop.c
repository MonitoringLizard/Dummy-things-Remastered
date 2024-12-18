#include <stdio.h>

int main()
{
    int a = 10;
    int b = 0;
    while (a > 0)
    {
        b++;
        printf("%d, ", b);
        a--;
    }
    printf("\n");

    int c = 0;
    do
    {
        printf("Insert a number: ");
        scanf("%d", &c);
    } while (c <= 0);

    for (int y = 0; y < c; y++)
    {
        for (int x = 0; x < c; x++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}