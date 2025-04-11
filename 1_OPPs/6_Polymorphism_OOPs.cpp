#include <iostream>
using namespace std;

// Base class
class Animal
{
public:
    virtual void makeSound()
    {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class
class Dog : public Animal
{
public:
    void makeSound()
    {
        cout << "Dog barks" << endl;
    }
};

// Derived class
class Cat : public Animal
{
public:
    void makeSound() override
    {
        cout << "Cat meows" << endl;
    }
};

int main()
{
    Animal *a1 = new Cat();
    a1->makeSound(); // Calls Cat's makeSound()

    Dog d;
    Animal *a2 = &d; // Upcasting: Derived class (Dog) assigned to Base class pointer (Animal)
    a2->makeSound(); // Calls Animal's makeSound() (without virtual function)

    Animal *a3 = new Dog(); // Upcasting: Derived class (Dog) assigned to Base class pointer (Animal)
    a3->makeSound();        // Calls Dog's makeSound() (with virtual function)

    delete a1;
    delete a2;

    return 0;
}

//  <!--- Theory of Polymorphism in C++ (OOPs) --->

/* ### **Polymorphism in C++ (OOPs)**

**Definition: = many forms  **
Polymorphism is one of the core concepts of Object-Oriented Programming (OOP) in C++. It allows objects of different classes to be treated as objects of a common base class. It enables a single interface to represent different types (or classes).

### **Types of Polymorphism in C++**
Polymorphism in C++ is categorized into two main types:

1. **Compile-time Polymorphism (Static Polymorphism)**
2. **Run-time Polymorphism (Dynamic Polymorphism)**

---

## **1. Compile-Time Polymorphism (Static Binding)**
Compile-time polymorphism is resolved during compilation and is achieved through **function overloading** and **operator overloading**.

### **A. Function Overloading**
Function overloading allows multiple functions with the same name but different parameters (different type or number of arguments).

#### **Example: Function Overloading**
```cpp
#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Math obj;
    cout << obj.add(5, 3) << endl;    // Calls int version
    cout << obj.add(2.5, 3.5) << endl; // Calls double version
    return 0;
}
```
### **B. Operator Overloading**
Operator overloading allows operators to be redefined to work with user-defined types (classes).

#### **Example: Operator Overloading**
```cpp
#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;
    Complex(int r, int i) : real(r), imag(i) {}

    Complex operator+(const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(2, 3), c2(3, 4);
    Complex c3 = c1 + c2; // Calls overloaded + operator
    c3.display();
    return 0;
}
```
---

## **2. Run-Time Polymorphism (Dynamic Binding)**
Run-time polymorphism is resolved during runtime and is achieved through **function overriding** and **virtual functions**.

### **A. Function Overriding**
Function overriding allows a derived class to provide a specific implementation of a function that is already defined in the base class.

#### **Example: Function Overriding**
```cpp
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class function" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class function" << endl;
    }
};

int main() {
    Base* bptr;
    Derived d;
    bptr = &d;
    bptr->show(); // Calls Derived class function
    return 0;
}
```
**Explanation:**
- The base class function is declared as `virtual`, which ensures that the function call is resolved at runtime.
- If we remove `virtual`, the base class function will be called instead of the derived class function.

### **B. Pure Virtual Functions & Abstract Classes**
A **pure virtual function** is a function that must be overridden in derived classes. A class with at least one pure virtual function is called an **abstract class**.

#### **Example: Pure Virtual Function**
```cpp
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Shape* s = new Circle();
    s->draw(); // Calls Circle's draw()
    delete s;
    return 0;
}
```
**Explanation:**
- The `Shape` class is abstract since it has a pure virtual function `draw()`.
- Any class derived from `Shape` must provide an implementation for `draw()`.

---

### **Key Differences Between Static and Dynamic Polymorphism**
| Feature                | Static Polymorphism | Dynamic Polymorphism |
|------------------------|-------------------- |----------------------|
| Binding Time           | Compile-time        | Run-time            |
| Implementation         | Function Overloading,
                          Operator Overloading | Function Overriding, Virtual Functions |
| Performance            | Faster (Resolved at
                           compile-time)       | Slower (Resolved at runtime) |
| Flexibility            | Less flexible       | More flexible |
| Requires `virtual`
keyword                  | No                  | Yes |

---

## **Conclusion**
Polymorphism in C++ provides flexibility and reusability in OOP.
- **Compile-time polymorphism** (overloading) improves efficiency.
- **Run-time polymorphism** (overriding) provides dynamic behavior.
- **Abstract classes & virtual functions** enforce consistency across derived classes.
*/