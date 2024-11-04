#include <stdio.h>
/*
"#include" is a command for telling the program to include a library;
in this case, we are including "stdio.h" a lib used to get acess to some useful commands
*/
int main()
// everything between those "{}" will be executed
{

    printf("Hello World!\n");/*<== DON'T forget to put ";" after every line, otherwise it will crash the program*/

    /*
    "printf" is one of the commands that our lib <stdio.h> gives to us;
    it its used to simply show some value on the terminal;

    do you see that "\n"?
    Well, its the character for "new line", and to see why its important, try and remove it
    */

    return 0;
    /*
    "return 0;" dont worry about this one, its just for if the program runs well it will return 0, otherwise 1,
    simple as that
    */

    // and a final observation: you can use "//" or "/**/" to make comments!
}