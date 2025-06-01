#include <iostream>
using namespace std;

// funtion overloading
class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    };

    float add(float a, float b)
    {
        return a * b;
    };
};


// funtion overriding
class Human
{
public:
    virtual void HumanLooks()
    {
        cout << "all humans are good " << endl;
    };
};

class Men : public Human
{
public:
    void HumanLooks() override
    {
        cout << "All mens are Handsome " << endl;
    }
};

class Woman : public Human
{
public:
    void HumanLooks() override
    {
        cout << "All womans are beautifull " << endl;
    }
};

int main()
{
    Calculator c1;
    cout << "add : " << c1.add(5, 8) << endl;
    cout << "mul : " << c1.add(3.4f, 5.7f) << endl;

    Human *h1 = new Men;
    h1->HumanLooks();

    Human *h2 = new Woman;
    h2->HumanLooks();

    delete h1;
    delete h2;

    return 0;
}

// Explanation:

/*

--->>> ### ✅ Function Overloading

Definition: When multiple functions in the same class have the same name but different parameters (type or number), it's called function overloading.

🧠 *It helps perform similar operations with different types or number of inputs.*

Example:

void show(int x);
void show(double y);
void show(int x, int y);
```

---

----->>>> ### ✅ Function Overriding

Definition: When a derived class has a function with the same name and parameters as in the base class, and it redefines that function — it's called function overriding.

🧠 *It allows the derived class to give a new behavior to the inherited function.*

Example:

class Animal {
public:
    virtual void sound() 
    { 
    cout << "Animal sound"; 
    }
};

class Dog : public Animal {
public:
    void sound() override 
    { 
    cout << "Dog barks";
    }
};

*/