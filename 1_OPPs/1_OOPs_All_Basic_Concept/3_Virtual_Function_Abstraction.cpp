#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Cricket
{
public:
    virtual void display()
    {
        cout << "Cricket is my fav game " << endl;
    }
};

class Football : public Cricket
{
public:
    void display()
    {
        cout << "Football is my fav game " << endl;
    }
};

int main()
{
    Cricket *c1 = new Football(); //Base Class Pointer Pointing to Derived Object
    c1->display(); // Football is my fav game
}



( Best Practices to Follow

#include <iostream>
using namespace std;

class Students {
public:
    virtual void Count() {
        cout << "In class X, total count is 50" << endl;
    }
};

class Boys : public Students {
public:
    void Count() override {
        cout << "Boys count is 30" << endl;
    }
};

class Girls : public Students {
public:
    void Count() override {  
        cout << "Girls count is 20" << endl;
    }
};

int main() {
    Students *s1 = new Boys;
    s1->Count();  // Output: Boys count is 30

    Students *s2 = new Girls;
    s2->Count();  // Output: Girls count is 20

    delete s1;
    delete s2;

    return 0;
}

// ✅ Best Practices to Follow

// 1. Use override keyword
// 📌 Use override always when overriding virtual methods — it catches mistakes at compile time.

// 2. Use virtual in base class
// You already did this correctly!


)

/* More Theory

Virtual functions are defined in a base class and can be redefined in derived classes, enabling runtime polymorphism.

They allow executing the most derived version of a function when called through a base class pointer or reference.

If a derived class does not implement its own version, the base class implementation will be executed instead.

To declare a virtual function, precede its declaration in the base class with the keyword virtual.

Virtual functions are useful when you don't know the type of the object at compile time and you want to call a function of a derived class using a pointer of a base class.


🧠 What is a Base Class in C++?
A base class (also called a parent or superclass) is the class that provides common properties and behaviors which can be inherited by other classes.

📘 Definition:
A base class is a class that is used to define a common interface or behavior and is inherited by one or more derived classes.


*/