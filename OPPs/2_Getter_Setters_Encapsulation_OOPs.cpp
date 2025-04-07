// Getters and Setters are member functions used to access and modify private variables in a class.
// They encapsulate data and ensure controlled acces

// Encapsulation – Keeps data private and prevents direct modification.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student
{
private: // Data members are private
    string Name;
    int Age;
    int Roll_no;
    string Course;

public:
    // Setter
    void SetName(string name)
    {
        if (name.length() > 2)
        {
            Name = name;
        }
        else
        {
            cout << "Name should be more than 2 characters" << endl;
        }
    }

    // Getter
    string GetName()
    {
        return Name;
    }

    void SetAge(int age)
    {
        if (age >= 18)
        {
            Age = age;
        }
        else
        {
            cout << "Age should be more than 18" << endl;
        }
    }

    int GetAge()
    {
        return Age;
    }

    void SetRoll_no(int roll_no)
    {
        Roll_no = roll_no;
    }

    int GetRoll_no()
    {
        return Roll_no;
    }

    void SetCourse(string course)
    {
        Course = course;
    }

    string GetCourse()
    {
        return Course;
    }

    void StudentInfo()
    {
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Roll No: " << Roll_no << endl;
        cout << "Course: " << Course << endl;
    }

    // Constructor
    Student(string name, int age, int roll_no, string course)
    {
        SetName(name);
        SetAge(age);
        SetRoll_no(roll_no);
        SetCourse(course);
    }
};

int main()
{
    Student s1 = Student("Shubham", 23, 101, "Engineering");
    s1.SetName("Shubham Patil"); // Setter

    cout << s1.GetName() << " " << s1.GetRoll_no() << " has taken " << s1.GetCourse() << "  at " << s1.GetAge() << endl;

    return 0;
}

//  <---- More Thoery ----->

/*
-- Encapsulation is the bundling of data and methods that operate on that data, restricting access to some of the object's components.
-- It is used to hide the values or state of a structured data object inside a class, preventing unauthorized parties' direct access to them.
-- Encapsulation is implemented using access specifiers in C++: public, private, and protected.


-- Abstraction involves hiding complex implementation details and providing a simple interface for users, akin to using a
   smartphone  without understanding its internal workings.

*/