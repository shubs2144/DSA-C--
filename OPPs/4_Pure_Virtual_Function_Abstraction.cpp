#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Cricket
{
public:
    virtual void display() = 0; // Pure Virtual Function
};

class Football : public Cricket
{
public:
    void display()
    {
        cout << "Football is my fav game " << endl;
    }
};

class Kho_Kho : public Cricket
{
public:
    void display()
    {
        cout << "Kho-Kho is my fav game " << endl;
    }
};

int main()
{

    // Cricket c1;  // Error: cannot declare variable 'c1' to be of abstract type 'Cricket'
    // c1.display();

    Cricket *c1 = new Football();
    c1->display();

    Cricket *c2 = new Kho_Kho();
    c2->display();

    // also we can For example, an array of pointers to a base class can hold different derived class objects, and invoking a method on the array will call the appropriate derived class method.

    Cricket *arr[2] = {c1, c2};
    for (int i = 0; i < 2; i++)
    {
        arr[i]->display();
    }

    return 0;
}

//  <---- More Thoery ----->

/*
Pure Virtual Functions

-- A pure virtual function is declared by assigning zero to the function declaration, indicating that it has no implementation in the base class.
-- The presence of at least one pure virtual function makes the class an abstract class, meaning it cannot be instantiated directly.
-- Derived classes must provide their own implementation of the pure virtual function to be concrete classes.
*/