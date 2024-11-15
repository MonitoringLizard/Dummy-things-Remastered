#include <math.h>
#include <stdio.h>

int main()
{
    /*
        'sqrt' is used to discover the square root of a number whyout writting a bunch of code for it.
    */

    int A = 81;
    float B = sqrt(A);

    printf("Square root\nthe square root of %d is %.2f", A, B);

    /*
        'pow' can be used instead of x(x), and it works as the following:
            pow(Number that will be multiplied, How many times it will be multiplied)
    */

    int C = 3;
    int D = pow(C, 2); // == "int D = 3²;"

    printf("Power\n%d elevated by 2 is equal %d", C, D);

    return 0;
}