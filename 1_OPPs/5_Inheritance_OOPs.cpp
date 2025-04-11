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

class PharmaStudent : public Student
{
public:
    string Medicine;

    PharmaStudent(string name, int age, int roll_no, string course, string medicine) : Student(name, age, roll_no, course)
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

int main()
{

    PharmaStudent s1 = PharmaStudent("Shubham", 23, 101, "Pharmacy", "Paracetamol");
    s1.Medicine = "Paracetamol";
    s1.PharmaStudentInfo();

    return 0;
};

/*
<<<----More Theory ---->>>


## Inheritance in C++ (Theory)

### Definition:
> Inheritance is one of the most important features of Object-Oriented Programming (OOP).
It allows a new class (derived class) to acquire the properties (data members) and behavior (member functions) of an existing class (base class).

---

### Why Use Inheritance?
- Code Reusability (No need to rewrite code)
- Extensibility (Add new features easily)
- Maintainability (Easy to update or modify)
- Data hiding (Control access using access specifiers)

---

## Syntax:
```cpp
class BaseClass {
   ///properties and functions
};

class DerivedClass : access_specifier BaseClass {
   ///additional properties and functions
};
```

---

## Types of Inheritance in C++:

| Type | Description | Example |
|------|-------------|---------|
| 1. Single Inheritance | One base class & one derived class | Father → Son |
| 2. Multiple Inheritance | One derived class inherits from multiple base classes | Father & Mother → Son |
| 3. Multilevel Inheritance | Inheritance in a chain | Grandfather → Father → Son |
| 4. Hierarchical Inheritance | One base class with multiple derived classes | Father → Son & Daughter |
| 5. Hybrid Inheritance | Combination of different types | Multiple + Multilevel |

---

## Diagram Representation:

### 1. Single Inheritance
```
Base Class
   ↓
Derived Class
```

---

### 2. Multiple Inheritance
```
Base1     Base2
   \       /
   Derived Class
```

---

### 3. Multilevel Inheritance
```
Base Class
   ↓
Derived Class1
   ↓
Derived Class2
```

---

### 4. Hierarchical Inheritance
```
        Base Class
        /       \
Derived1       Derived2
```

---

### 5. Hybrid Inheritance
→ Combination of above types.

---

## Access Specifiers in Inheritance:
| Access Specifier     | Private Members | Protected Members      | Public Members        |
|-----------------     |-----------------|-------------------     |----------------       |
| Private Inheritance  | Not Inherited   | Inherited as Private   | Inherited as Private  |
| Protected Inheritance| Not Inherited   | Inherited as Protected | Inherited as Protected|
| Public Inheritance   | Not Inherited   | Inherited as Protected | Inherited as Public   |

---

## Real-life Example:

| Real World Example | OOP Relation |
|-------------------|--------------|
| Father → Son | Single Inheritance |
| Teacher & Musician → Student | Multiple Inheritance |
| Grandfather → Father → Son | Multilevel Inheritance |
| Father → Son & Daughter | Hierarchical Inheritance |
| Mixture of Above | Hybrid Inheritance |

---

> Conclusion:
Inheritance makes C++ programming more powerful by reusing the existing code, reducing redundancy, and making code structure more logical and organized.


*/