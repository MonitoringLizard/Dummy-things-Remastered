#include <stdio.h>
int leng = 3;

int main()
{
    float average(int a[]);

    int score[leng];

    for (int i = 0; i < leng; i++)
    {
        printf("Score: ");
        scanf("%d", &score[i]);
    }

    printf("The average is: %f", (float)average(score));

    return 0;
}

float average(int a[])
{
    float sum = 0;
    for (int i = 0; i < leng; i++)
    {
        sum += a[i];
    }
    sum /= leng;
    return sum;
}
