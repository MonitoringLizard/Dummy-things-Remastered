#include <stdio.h>
#include <string.h>
/*we include this lib for the purpose of editing the properties of strings, and others commands related to the latter*/

int main()
{
    /*here we create some variables that will be used during our program :)*/
    char name[25];
    unsigned short int age;

    /*here we get the "name" of the user*/
    printf("Please write your name:");
    /*"fgets" is to read the entire line (this inlcudes "whitespaces") and stuff inside the var,
     a better method if you want to get a input thats generally a phrase*/
    fgets(name, 25, stdin);
    /*dont worry much about this thing below, its a command thats is inside the library <string.h>,
    this line has the purpose of getting the lenght of the string and subtracting 1 (which would delete the "\n" character)*/
    name[strlen(name) - 1] = '\0';

    /*here we grab the age of user*/
    printf("Write your age:");
    /*"scanf" is a method thats simpler than "fgets",
     but it has one of its main weakness of not being to read beyond the first whitespace*/
    scanf("%d", &age);
    printf("Hello %s, i am glad that you survived for %d years!", name, age);
    return 0;
}