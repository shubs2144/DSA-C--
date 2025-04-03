#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Cricket{
public:
    virtual void display() {
        cout << "Cricket is my fav game " << endl;
    }
};

class Football : public Cricket{
public:
    void display() {
        cout << "Football is my fav game " << endl;
    }
};

int main(){
    Cricket* c1 = new Football();
    c1->display(); // Football is my fav game
}



/* More Theory 

Virtual functions are defined in a base class and can be redefined in derived classes, enabling runtime polymorphism.

They allow executing the most derived version of a function when called through a base class pointer or reference.

If a derived class does not implement its own version, the base class implementation will be executed instead.

To declare a virtual function, precede its declaration in the base class with the keyword virtual.

Virtual functions are useful when you don't know the type of the object at compile time and you want to call a function of a derived class using a pointer of a base class.

*/