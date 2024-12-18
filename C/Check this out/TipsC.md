# About C

> ### Whats is C?

C is a powerful and widely-used programming language that was created in the 1970s. It is known for being simple, fast, and efficient, making it a popular choice for system programming, such as creating operating systems and embedded systems. C is the foundation for many other programming languages, like C++, Java, and Python, and is praised for giving programmers fine control over hardware and memory. Despite being an older language, it’s still highly valued for learning programming basics and understanding how computers work.

- By ChatGPT (i promise i will write myself one day)

> ### Stuff

Here is some things that you may find valuable during your experience with C

> #### **Compilers**

For you to be able to program in C or even C++, you will need to install a compiler into your computer, even tough that VScode might say to install the C compiler made by Microsoft, by doing a quick research, i found out that its better to install the GCC (GNU Compiler Collection) fow now, but its up to you.

- GCC official site: https://gcc.gnu.org/
- MinGW (GCC but for windows): https://sourceforge.net/projects/mingw-w64/
  > #### **Libraries**

> #### **Useful and free courses**

Well, i will say the truth, you wont truly learn C or any other language by purely looking at those dumb files, its much better if you take some courses, but probably you dont want to spend money on it, so heres some free anf good ones that i have taken:

1. (For only portuguese speaking fellas) Curso de JavaScript para pegar o tranco e aprender o básico de programação:

2. BroCode (truly a chad):

3. edX courses, like CS50:

> #### **Common issues**

Here some common issues that you might do during your learning, and don't fall again for those traps, alright?

---

1. Truncation

Its a issue related to the property of intergers, that since those dont allow broken numbers, any operation that gives a broken number, like this one:

```C
int X = 1;
int Y = 2;
float Z = X / 2;
/* SPOILER: Z is going to be zero, cause anything thats decimal, will be cut away*/
```

to counter this bug, we can do one of the following:

1. Define X and Y as float since the start, but this might be problematic in cases if you only want full number as a input.
2. Define X and Y for a moment, like the following:

```C
float Z = (float) X / (float) Y;
```

---

3. Integer overflow

---

4. Bad naming

When naming variables is important to keep in mind that the name needs to be readable by other person, and that other fella undestand what the variable is about, even tough in lessons, you see people naming them just letters, try to creat "smarter names".

```C
/*Try to not use single characters for naming variables*/
int a = 12; //What is this variable mean't to be? age? a random number?

int age = 33; // Now makes sense!, its more readable for someone outside.
```

---

4. Forgetting the damn ";"

I dont know why, but you gotta add ";" after every single damn line, otherwise the computer will think that everything is on a single line and crash;

---

5. Not saving on Git or Github

Git and Github are two similar, they both serve to save your code, and doing backups in case you slip and make it worse, if you want to do backups its much better to install Git, but if you want to save or share you code, use Github

- Git download:
- Github:

---

6.
