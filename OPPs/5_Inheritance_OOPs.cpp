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

protected:
    int marks;

public:

    // Constructor
    Student(string name, int age, int roll_no, string course)
    {
        Name = name;
        Age = age;
        Roll_no = roll_no;
        Course = course;
    }

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

    void PassorFail()
    {
        if (marks > 35)
        {
            cout << "Pass" << endl;
        }
        else
        {
            cout << "Fail" << endl;
        }
    }
};

class PharmaStudent : public Student{
public:
    string Medicine;

    PharmaStudent(string name, int age, int roll_no, string course, string medicine):
         Student(name, age, roll_no, course)
    {
        Medicine = medicine;
    }
    void PharmaStudentInfo()
    {
        cout << "Name: " << GetName() << endl;
        cout << "Age: " << GetAge() << endl;
        cout << "Roll No: " << GetRoll_no() << endl;
        cout << "Course: " << GetCourse() << endl;
        cout << "Medicine: " << Medicine << endl;
    }

};

main()
{

    PharmaStudent s1;
    s1.Medicine = "Paracetamol";
    s1.PharmaStudentInfo();

    return 0;
}