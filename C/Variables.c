/*I strongly recomend you to play around with this file to understand fully the data types, good luck and good programming for you :)*/
#include <stdio.h>
#include <stdbool.h>/*we include this libary to be able to use boolean variables*/

int main()
{
    // char

    /*
        "char" are variales that are generally used for storing characters, using the ASCII convention
        a "char" can only store a single character or the number related to it (it ranges from -127 to +127) <= needs further research
        to display it, we use "%c" for the character or "%d" to the number.
        they are very light, only needing 1 byte of memory!
    */
    char Diego = 'D';
    char Dio = 68;

    // UNSIGNED char

    /*
        the only thing that changes is that the range changes to 0 to 255, being the "weakest" unsigned variable to store numbers
    */
    unsigned char smollest = 1;

    // strings

    /*
        to make a string in C, we make a array of char, by writting the following:
        'char name[];'
        and it well... can store a bunch of characters
    */
    char animal[] = "Snake";

    // SIGNED int

    /*
        "int" or integers are a type of variable whose fate is to store ONLY full numbers (no broken numbers),
        and we have many of them, each type is different on memory size and range
    */

    short smoll = 32767;                  // byte size: 2 bytes, min/max: -32768 to +32767
    int normar = 2147483647;              // byte size: 4 bytes, min/max: -2147483648 to +2147483647
    long long snek = 9223372036854775807; // byte size: 8 bytes, min/max: -9223372036854775808 to +9223372036854775807

    // UNSIGNED int

    /*
        When unsigned, we have some changes, now those variables can only store positive numbers,
         and their formats specifiers
    */
    unsigned short A = 65535;                    // byte size: 1 bytes, min/max: 0 to +65535
    unsigned int B = 4294967295;                 // byte size: 4 bytes, min/max: 0 to +4294967295
    unsigned long long C = 18446744073709551614; // byte size: 8 bytes, min/max: 0 to +18446744073709551614

    // float

    /*
        floats are a type of data whose main function is to store FUCKING broken numbers,
        but they can have a accuracy of around 7 digits, otherwise they will generate innacurate numbers
        btw, they occupy 4 bytes
    */
    float beta = 1.618033988749894;

    // double

    /*
        floats, but better, they are able to store up to 16 digits whyout any inaccuracy.
        they are a bit heavier than float, being the 'double' of it, get it? (8 bytes)
    */
    double alpha = 1.618033988749894;

    /*
    For both 'float' and 'double' you may want to specify the amount of digits, by putting 0.n (n is the number) that you want to print.
    EX: printf("%0.9lf", A); or just %.nlf, idk it works the same.
    */

    // boolean

    /*
        those are variables that just tell "true" or "false", but if you tell to print on the terminal it will show a number;
        0 for "false" and 1 for "true";
    */
    bool YorN = false;

    
    printf("Char\n%d is \'%c\' but from another universe!\n\n", Diego, Diego);

    printf("Unsigned Char\n%d is a number that you can get with a unsigned char\n\n", smollest);

    printf("String\nTheres a %s behind you...\n\n", animal);

    printf("Integers\nshort => %d\nlong or \'normal\' => %d\nlong long => %lld\n\n", smoll, normar, snek);

    printf("Unsigned Integers\nshort => %d\nlong or \'normal\' => %u\nlong long => %llu\n\n", A, B, C);*/

    printf("Double & Float\nVirgin Beta %.7f vs \nChad Alpha %.15lf\n\n", beta, alpha);

    /*I dont know how to display a boolean as a string... srry🫠*/
    printf("Boolean\nAre you a professional programmer? %d", YorN);

    return 0; // <= it means that if a program is done correctly, it will return "false" (0) to errors, and "true" to errors (1)
}
