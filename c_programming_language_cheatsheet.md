# C Programming Language Cheatsheet

## 1. Basic Program Structure

```c
#include <stdio.h>

int main(void)
{
    printf("Hello, World!\n");

    return 0;
}
```

Compile:

```bash
gcc program.c -o program
```

Run:

```bash
./program
```

---

# 2. Comments

```c
// Single line comment

/*
   Multi-line
   comment
*/
```

---

# 3. Data Types

## Basic Types

| Type     | Size (typical) | Example       |
| -------- | -------------: | ------------- |
| `char`   |         1 byte | `'A'`         |
| `short`  |        2 bytes | `short x=10;` |
| `int`    |        4 bytes | `int age=20;` |
| `long`   |        8 bytes | `long n;`     |
| `float`  |        4 bytes | `3.14f`       |
| `double` |        8 bytes | `3.14159`     |
| `void`   |           none | no value      |

Example:

```c
char c = 'A';
int age = 30;
float price = 9.99f;
double pi = 3.1415926;
```

---

# 4. Variables

Declaration:

```c
int x;
```

Initialization:

```c
int x = 10;
```

Multiple:

```c
int a=1, b=2, c=3;
```

Constants:

```c
const int MAX = 100;
```

---

# 5. Operators

## Arithmetic

```c
+
-
*
/
%
```

Example:

```c
int r = 10 % 3;   // 1
```

---

## Comparison

```c
==
!=
>
<
>=
<=
```

Example:

```c
if (a == b)
{
}
```

---

## Logical

```c
&&   // AND
||   // OR
!    // NOT
```

Example:

```c
if(age >=18 && age <=60)
{
}
```

---

## Bitwise

```c
&
|
^
~
<<
>>
```

Example:

```c
x = x << 1;   // multiply by 2
```

---

# 6. Control Flow

## if

```c
if(condition)
{
}
else
{
}
```

Example:

```c
if(score >=60)
{
    printf("Pass");
}
else
{
    printf("Fail");
}
```

---

## switch

```c
switch(day)
{
case 1:
    printf("Monday");
    break;

case 2:
    printf("Tuesday");
    break;

default:
    printf("Unknown");
}
```

---

## for Loop

```c
for(int i=0;i<10;i++)
{
    printf("%d\n",i);
}
```

---

## while Loop

```c
while(condition)
{
}
```

---

## do-while

```c
do
{
}
while(condition);
```

---

# 7. Functions

Declaration:

```c
int add(int a,int b);
```

Definition:

```c
int add(int a,int b)
{
    return a+b;
}
```

Call:

```c
int result = add(3,4);
```

---

# 8. Arrays

## One-dimensional

```c
int numbers[5];

numbers[0]=10;
```

Initialization:

```c
int a[]={1,2,3,4};
```

Length:

```c
sizeof(a)/sizeof(a[0])
```

---

## Two-dimensional

```c
int matrix[3][3];

matrix[0][1]=5;
```

---

# 9. Strings

C strings are arrays of characters ending with `'\0'`.

```c
char name[]="John";
```

Equivalent:

```c
char name[]={'J','o','h','n','\0'};
```

Common functions:

```c
#include <string.h>
```

| Function   | Purpose     |
| ---------- | ----------- |
| `strlen()` | length      |
| `strcpy()` | copy        |
| `strcat()` | concatenate |
| `strcmp()` | compare     |

Example:

```c
char a[20];

strcpy(a,"hello");
```

---

# 10. Pointers

A pointer stores an address.

Declaration:

```c
int *p;
```

Example:

```c
int x=10;

int *p=&x;

printf("%d",*p);
```

Output:

```
10
```

Operators:

| Operator | Meaning          |
| -------- | ---------------- |
| `&`      | address of       |
| `*`      | value pointed to |

---

# 11. Pointer Arithmetic

```c
int a[]={10,20,30};

int *p=a;

printf("%d",*(p+1));
```

Output:

```
20
```

---

# 12. Dynamic Memory

Header:

```c
#include <stdlib.h>
```

Allocate:

```c
int *p;

p = malloc(sizeof(int));
```

Array allocation:

```c
int *arr;

arr = malloc(10*sizeof(int));
```

Release:

```c
free(arr);
```

Other functions:

```c
calloc()
realloc()
free()
```

---

# 13. Structures

Create custom data types:

```c
struct Person
{
    char name[50];
    int age;
};
```

Usage:

```c
struct Person p;

p.age=20;
```

Pointer:

```c
struct Person *ptr=&p;

ptr->age=30;
```

---

# 14. typedef

Create aliases:

```c
typedef unsigned int uint;

uint x=10;
```

Structure:

```c
typedef struct
{
    int x;
    int y;
} Point;

Point p;
```

---

# 15. Enumerations

```c
enum Color
{
    RED,
    GREEN,
    BLUE
};

enum Color c=RED;
```

---

# 16. File I/O

Header:

```c
#include <stdio.h>
```

Open:

```c
FILE *fp;

fp=fopen("data.txt","r");
```

Modes:

| Mode   | Meaning     |
| ------ | ----------- |
| `"r"`  | read        |
| `"w"`  | write       |
| `"a"`  | append      |
| `"rb"` | binary read |

Read:

```c
fscanf(fp,"%d",&x);
```

Write:

```c
fprintf(fp,"%d",x);
```

Close:

```c
fclose(fp);
```

---

# 17. Standard Input / Output

Output:

```c
printf("x=%d",x);
```

Input:

```c
scanf("%d",&x);
```

Common formats:

| Type     | Format |
| -------- | ------ |
| int      | `%d`   |
| unsigned | `%u`   |
| long     | `%ld`  |
| float    | `%f`   |
| double   | `%lf`  |
| char     | `%c`   |
| string   | `%s`   |

---

# 18. Preprocessor

Include:

```c
#include <stdio.h>
```

Macro:

```c
#define PI 3.14159
```

Conditional:

```c
#ifdef DEBUG

#endif
```

---

# 19. Header Files

Example:

`math.h`

```c
#include <math.h>

sqrt(16);
```

Common headers:

| Header      | Purpose             |
| ----------- | ------------------- |
| `stdio.h`   | I/O                 |
| `stdlib.h`  | memory, conversion  |
| `string.h`  | strings             |
| `math.h`    | mathematics         |
| `time.h`    | time                |
| `stdbool.h` | boolean             |
| `stdint.h`  | fixed-size integers |

---

# 20. Storage Classes

| Keyword    | Meaning            |
| ---------- | ------------------ |
| `auto`     | local variable     |
| `register` | CPU register hint  |
| `static`   | lifetime preserved |
| `extern`   | external variable  |

Example:

```c
void counter()
{
    static int count=0;

    count++;
}
```

---

# 21. Command Line Arguments

```c
int main(int argc,char *argv[])
{
    printf("%s",argv[1]);

    return 0;
}
```

Run:

```bash
./app hello
```

---

# 22. Common Data Structures in C

C has no built-in collections, so programmers implement them:

| Data Structure | Common Implementation |
| -------------- | --------------------- |
| Array          | built-in              |
| Linked List    | `struct` + pointers   |
| Stack          | array/list            |
| Queue          | array/list            |
| Hash Table     | array + linked list   |
| Tree           | structs + recursion   |
| Graph          | adjacency matrix/list |

Example linked list node:

```c
struct Node
{
    int data;
    struct Node *next;
};
```

---

# 23. Common Algorithms in C

Sorting:

```c
qsort()
```

Searching:

```c
bsearch()
```

From:

```c
#include <stdlib.h>
```

Common implementations:

* Bubble Sort
* Selection Sort
* Insertion Sort
* Merge Sort
* Quick Sort
* Heap Sort
* Binary Search
* DFS/BFS

---

# 24. C Memory Model

```
+----------------+
| Stack          |
| local vars     |
+----------------+
| Heap           |
| malloc memory  |
+----------------+
| Data Segment   |
| global vars    |
+----------------+
| Code Segment   |
| program code   |
+----------------+
```

---

# 25. Compilation Pipeline

```
source.c
   |
   v
Preprocessor
   |
   v
Compiler
   |
   v
Assembly
   |
   v
Assembler
   |
   v
Object file
   |
   v
Linker
   |
   v
Executable
```

---

# 26. C Programming Learning Path

A systematic order:

```
1. Syntax
   |
2. Variables & Control Flow
   |
3. Functions
   |
4. Arrays & Strings
   |
5. Pointers
   |
6. Memory Management
   |
7. Structures
   |
8. File I/O
   |
9. Data Structures
   |
10. Algorithms
   |
11. System Programming
   |
12. Operating System / Embedded Programming
```

---

## C Philosophy in One Sentence

> **C gives you a thin abstraction over the machine: you manage memory, data layout, and execution explicitly.**

This is why C remains the foundation for:

* Operating systems (Linux kernel)
* Embedded systems
* Compilers
* Databases
* Network stacks
* High-performance libraries

Compared with Java or C++, C is smaller, closer to hardware, and gives you maximum control.
