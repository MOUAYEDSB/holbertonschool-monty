![App Screenshot](https://media.licdn.com/dms/image/C5612AQFAa7SGVzYEqg/article-cover_image-shrink_423_752/0/1632753993625?e=1689811200&v=beta&t=hKIaHZYDu6aBu9WKqdyMsm65dRpvCsPLnzV2UIuK2LM)

## 1. Description 👀

- The Holberton School Monty project is a programming project in the C language that involves creating an interpreter for the Monty language. The Monty language is a very simple programming language, designed to be easy to learn and use, and which allows working with stacks.
- The objective of the project is to create a program that takes a Monty file as input, parses it, and executes the instructions contained in it using a stack to store data. Monty instructions are limited to a restricted set of stack operations, such as adding an element to the stack (push), removing the top element of the stack (pop), displaying all elements in the stack (pall), etc. Monty is a scripting language that is first compiled into Monty byte codes. It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty byte codes files.

## 2. Getting Started 📫

To get started with the Monty project, clone this repository onto your local machine by running the following command:

```bash
  git clone https://github.com/<username>/monty.git
```

## 3. Features

Here is the list of files involved in the operation of the Monty program:

1- [monty.c](https://linktodocumentation)

- The main file that contains the main function and opens and reads the Monty file line by line.

2- [monty.h](https://linktodocumentation)

- monty.h: The header file that contains the declarations of functions and structures used in the program.

3- [getfunc.c](https://linktodocumentation)

- The file that contains the definitions of the operation functions available in the program (push, pall, pop, add, swap, nop..).

4- [\_push.c](https://linktodocumentation)

- The file that contains the definition of the push function, which adds an element to the stack.

5- [\_pall.c](https://linktodocumentation)

- The file that contains the definition of the pall function, which prints all elements of the stack.

6- [\_pop.c](https://linktodocumentation)

- The file that contains the definition of the pop function, which removes the top element of the stack.

7- [\_add.c](https://linktodocumentation)

- The file that contains the definition of the add function, which adds the first two elements of the stack.

8- [\_swap.c](https://linktodocumentation)

- The file that contains the definition of the swap function, which swaps the positions of the first two elements of the stack.

9- [\_nop.c](https://linktodocumentation)

- &The file that contains the definition of the nop function, which does nothing.

10- [\_freeList.c](https://linktodocumentation)

## 4. Usage 👍

- Once you have cloned the repository, navigate to the monty directory and run the following command to compile the program:

```bash
  gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```

- To run the program, use the following command:

```bash
  ./monty <file_name>
```

## 5.Exemples Monty Byte Code Files

- Files containing Monty byte codes usually have the .m extension. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument.

```bash
./monty bytecodes/00.m
```

```bash
julien@ubuntu:~/monty$ cat -e bytecodes/00.m
```

```bash
push 1$
push 2$
push 3$
pall$
julien@ubuntu:
```

```bash
  julien@ubuntu:~/monty$ ./monty bytecodes/00.m
3
2
1
julien@ubuntu:~/monty$
```

## Running Tests

Explication

- The instructions in the file bytecodes/00.m are as follows:

push 1: Adds the integer 1 to the stack.

push 2: Adds the integer 2 to the stack.

push 3: Adds the integer 3 to the stack.

pall: Displays all the elements in the stack.

- When the Monty program is executed with these instructions,

it adds the integers 1, 2, and 3 to the stack in that order,
and then

displays all the elements in the stack (3, 2, and 1) using the pall instruction.

Then, the program terminates without any errors, and the terminal returns to the command prompt.
