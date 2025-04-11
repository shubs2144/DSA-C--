#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student
{
public:
    string Name; // Attribute or Data Member
    int Age;
    int Roll_no;
    string Course;

    void printInfo()
    {
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Roll No: " << Roll_no << endl;
        cout << "Course: " << Course << endl;
    }

    // Constructor
    Student(string name, int age, int roll_no, string course)
    {
        Name = name;
        Age = age;
        Roll_no = roll_no;
        Course = course;
    }

    // if we don't define constructor then default constructor will be called.

    // Student(){
    //     cout << "Default Constructor Called" << endl;
    // }

    // when attribute and assign values are same then we can use this keyword to assign values.

    // Student(string Name , int Age , int Roll_no , string Course){
    //     this->Name = Name;
    //     this->Age = Age;
    //     this->Roll_no = Roll_no;
    //     this->Course = Course;
    // }
};

int main()
{
    Student s1 = Student("Shubham", 23, 101, "Engineering");
    s1.printInfo();

    Student s2 = Student("Patil", 22, 102, "Pharmacy");
    s2.printInfo();
}

//  <---- More Thoery ----->

/*

-- Constructor is a special type of member function of a class which is automatically called when an object of a class is created.

-- C++ automatically provides a default constructor, but custom constructors can be defined to take parameters.

-- Destructors are used to clean up resources when an object is no longer needed, though they are not explicitly covered in
   the provided transcript.

--->  Types of Constructors

Default Constructor – A constructor with no parameters, initializes default values.

Parameterized Constructor – A constructor that accepts arguments to initialize specific values.

Copy Constructor – A constructor that creates a new object as a copy of an existing object.




---> // Example of Constructor:

#include <iostream>
using namespace std;

class Demo {
public:
    int x;

    // Default Constructor
    Demo() {
        x = 0;
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor
    Demo(int val) {
        x = val;
        cout << "Parameterized Constructor Called" << endl;
    }

    // Copy Constructor
    Demo(const Demo &obj) {
        x = obj.x;
        cout << "Copy Constructor Called" << endl;
    }
};

int main() {
    Demo obj1;              // Default Constructor
    Demo obj2(10);          // Parameterized Constructor
    Demo obj3 = obj2;       // Copy Constructor

    return 0;
}

*/