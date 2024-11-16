#include <stdio.h>
#include <math.h> // We are gonna use this library to get acess to the power function

int main()
{

    float EqCircu(float diam, float pi);
    float EqArea(float diam, float pi);
    // Here we call the function as a way of saying that it exist and that it can used long the process

    float diam;
    const float pi = 3.1415926;
    // Declaring some variables, diam will need the input of the use, but pi not

    printf("Write the diameter of your circle: ");
    scanf("%f", &diam);
    // We pick the user's input here

    float Area = EqArea(diam, pi);
    float Circuference = EqCircu(diam, pi);
    // Here we create a float whose value is equal the returned value of the function

        printf("\nThe circuference of your circle is %.2f\n", Circuference);
    printf("The Area of your circle is %.2f\n", Area);
}

/*
    We could have defined the function inside the "int main()", BUT since this could generate problems in bigger projects,
    it's better to define the function outside of the "main"
*/
float EqCircu(float diam, float pi) // EqCircu ==> Equation of circuference
/*
    This function has both a output and a input to it, which means that it will use the input and return a certain value.
    The input is "float diam" and the output is gonna be a float value
*/
{
    return diam * pi;

    /*
        Here we have some code, as you can see, this code define the float "pi" and then it return the result of diameter * pi
    */
}

float EqArea(float diam, float pi)
{
    return pow(diam, 2) * pi;
}