#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student{
public:

    string name;  // Attribute or Data Member
    int age; 
    int roll_no;
    string course;

    void printInfo(){    // Method or Member Function
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Course: " << course << endl;
    }
};



int main()
{
    Student s1;           // Object of Student Class
    s1.name = "Shubham";
    s1.age = 23;
    s1.roll_no = 101;
    s1.course = "Engineering";

    s1.printInfo(); // Calling Method

    Student s2;
    s2.name = "sakshi";
    s2.age = 22;
    s2.roll_no = 102;
    s2.course = "Pharmacy";

    s2.printInfo(); // Calling Method


    return 0;
}
