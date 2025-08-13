# Intro to C++

## What is C++?
- Object-oriented programming language allowing code reuse and low-level control over system resources and memory.
- High-performance, widely used in:
  - Operating systems
  - Game development
  - Scientific computing and simulations
  - Machine learning back-end libraries
  - Compilers and interpreters

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, C++!" << endl;
    return 0;
}
```

---

## OOPS – Object-Oriented Programming System
- Organizes code around **objects** containing:
  - **Attributes** (data)
  - **Methods** (functions)
- Benefits:
  - Organized, reusable, maintainable code
  - Models real-world systems intuitively

```cpp
class Car {
public:
    string brand;
    void honk() {
        cout << "Beep Beep!" << endl;
    }
};

int main() {
    Car myCar;
    myCar.brand = "Toyota";
    myCar.honk();
}
```

---

## Compiler
- Translates high-level C++ code into machine code.
- Checks for syntax errors, enforces language rules.
- Generates executable files (`.exe` on Windows).

---

## Preprocessing Statements
- `#include` – Include header files
- `#define` – Define macros
- `#undef` – Undefine macros
- `#pragma` – Compiler-specific instructions
- Conditional compilation: `#ifdef`, `#ifndef`, `#if`, `#elif`, `#else`, `#endif`

```cpp
#include <iostream>
#define PI 3.14

int main() {
    std::cout << "Value of PI: " << PI << std::endl;
}
```

---

## Linker
- Combines multiple object files into a single executable.
- Resolves symbols, links external libraries, removes unused code.

---

## Variables & Data Types
- **Basic types:**  
  `int` (4B), `float` (4B), `double` (8B), `char` (1B), `bool` (1B), `void` (0B)
- **Modifiers:** short, long, signed, unsigned

```cpp
int age = 25;
float price = 99.99;
char grade = 'A';
bool isStudent = true;
```

---

## Functions
- Block of code performing a specific task.
- **Types:** User-defined, predefined.
- Structure: return type → name → parameters → body.

```cpp
int add(int a, int b) {
    return a + b;
}

int main() {
    cout << add(5, 3);
}
```

---

## Conditions & Branching
- **Operators:**
  - Logical: `&&`, `||`, `!`
  - Relational: `==`, `!=`, `<`, `>`, `<=`, `>=`
- **Statements:** `if`, `else if`, `else`, `switch`

```cpp
if (x > 0) {
    cout << "Positive";
} else {
    cout << "Non-positive";
}
```

---

## Switch Statement
- Tests a variable against multiple constants.

```cpp
int day = 3;
switch(day) {
    case 1: cout << "Monday"; break;
    case 2: cout << "Tuesday"; break;
    default: cout << "Other day";
}
```

---

## Loops
- **Types:**
  - `for` – known iterations
  - `while` – pre-condition loop
  - `do-while` – executes at least once

```cpp
for (int i = 0; i < 5; i++) {
    cout << i << " ";
}
```

---

## Pointers
```cpp
int num = 10;
int* ptr = &num;
cout << "Address: " << ptr << ", Value: " << *ptr;
```

---

## References
```cpp
int a = 5;
int& ref = a;
ref = 10; // changes a to 10
```

---

## Classes & Objects
```cpp
class Student {
public:
    string name;
    void display() {
        cout << "Name: " << name << endl;
    }
};
```

---

## Class vs Struct
- Class: members private by default
- Struct: members public by default

```cpp
struct Point {
    int x, y;
};
```

---

## Constructors & Destructors
```cpp
class MyClass {
public:
    MyClass() { cout << "Constructor"; }
    ~MyClass() { cout << "Destructor"; }
};
```

---

## Static in C++
```cpp
void demo() {
    static int count = 0;
    count++;
    cout << count;
}
```

---

## Enums
```cpp
enum Color { Red, Green, Blue };
Color c = Red;
```

---

## Inheritance
```cpp
class Animal {
public:
    void eat() { cout << "Eating"; }
};

class Dog : public Animal {
public:
    void bark() { cout << "Barking"; }
};
```

---

## Arrays
```cpp
int arr[5] = {1, 2, 3, 4, 5};
for(int i = 0; i < 5; i++) cout << arr[i] << " ";
```
