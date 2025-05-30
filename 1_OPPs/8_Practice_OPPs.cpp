#include <iostream>
#include <string>
#include <climits>
using namespace std;

// Create Simple Class and Object then optimizing using constructor

/*
class car
{
public:
   int Seats;
   string Company;
   string Price;

   void carInfo(){
       cout << Seats << " Seats" << endl;
       cout << Company << " Company" << endl;
       cout << Price << " Price" << endl;
   }
// Constructor
   car(int seats, string company, string price){
       Seats = seats;
       Company = company;
       Price = price;
   }
};

int main(){
   car c1 = car(4, "BMW", "10 crore");
   // c1.seats = 4 ;
   // c1.company = "Mercedese";
   // c1.price = "15 crore";

   c1.carInfo();

}


// Getter and Setter

#include <iostream>
using namespace std;

class Human
{
private:
    int Age;
    string Sex;
    string Name;
    float Hight;

public:
    void SetAge(int age)
    {
        Age = age;
    }

    int GetAge()
    {
        return Age;
    }

    void SetSex(string sex)
    {
        Sex = sex;
    }

    string GetSex()
    {
        return Sex;
    }

    void SetName(string name)
    {
        Name = name;
    }

    string GetName()
    {
        return Name;
    }

    void SetHight(float hight)
    {
        Hight = hight;
    }

    float GetHight()
    {
        return Hight;
    }

    void humanInfo()
    {
        cout << "age is " << Age << endl;
        cout << "sex is " << Sex << endl;
        cout << "name is " << Name << endl;
        cout << "hight is in M " << Hight << endl;
    }

    Human(int age, string sex, string name, float hight)
    {
        Age = age;
        Sex = sex;
        Name = name;
        Hight = hight;
    };
};

int main()
{
    Human h1 = Human(23, "Male", "Shubham", 5.11);
    h1.humanInfo();
}

// we can improve above code

#include <iostream>
using namespace std;

class Human
{
private:
    int age;
    string sex;
    string name;
    float height;

public:
    // Constructor
    Human(int a, string s, string n, float h)
    {
        setAge(a);
        setSex(s);
        setName(n);
        setHeight(h);
    }

    // Setters
    void setAge(int a) { age = a; }
    void setSex(string s) { sex = s; }
    void setName(string n) { name = n; }
    void setHeight(float h) { height = h; }

    // Getters
    int getAge() { return age; }
    string getSex() { return sex; }
    string getName() { return name; }
    float getHeight() { return height; }

    void humanInfo()
    {
        cout << "Age is: " << age << endl;
        cout << "Sex is: " << sex << endl;
        cout << "Name is: " << name << endl;
        cout << "Height in meters is: " << height << endl;
    }
};

int main()
{
    Human h1(23, "Male", "Shubham", 5.11);
    h1.humanInfo();
    return 0;
}


class Students
{
public:
    virtual void Count()
    {
        cout << "In class X , counts is 50" << endl;
    }
};

class Boys : public Students
{
public:
    void Count() override
    {
        cout << "Boys count is 30 " << endl;
    }
};

class Girls : public Students
{
public:
    void Count() override
    {
        cout << "Girls count is 20 " << endl;
    }
};

int main()
{
    Students *s1 = new Boys;
    s1->Count();

    Students *s2 = new Girls;
    s2->Count();

    delete s1;
    delete s2;
}


class Vehicle {
    private:
        string Type;
        int Avg;

    public:
        Vehicle(string type, int avg) {
            Type = type;
            Avg = avg;
        }

        void setType(string type){
            Type = type;
        }

        void setAvg(int avg){
            Avg = avg;
        }

        string getType() const {
            return Type;
        }

        int getAvg() const {
            return Avg;
        };

        void vehicleInfo() const {
            cout << "Vehicle type is : " << Type << endl;
            cout << "Vehicle avg is : " << Avg << endl;
        };
};

class Bike : public Vehicle {
    private:
        bool isElectric;

    public:
        Bike(string type, int avg, bool electric) : Vehicle(type, avg){
            isElectric = electric;
        }

        void bikeInfo(){
            vehicleInfo();
            cout << "bike is electric ? : " << isElectric << endl;
        };
};

int main() {
    Bike b1("Scooty", 45, "yes");
    b1.bikeInfo();
}



    class Student {
        public:
        string Name;
        int Age;
        int Roll_no;

        public:
        Student(string n, int a, int r) : Name(n), Age(a), Roll_no(r) {};

        void StudentInfo() {
            cout << "name is " << Name << " age " << Age << " roll no " << Roll_no << endl;
        }
    };

    int main() {
        Student s1("Shubs" , 24, 123);
        s1.Name = "SHubham";
        s1.Age = 23;
        s1.Roll_no =  123;
        s1.StudentInfo();
    }

*/


class Employee {
private:
    int employeeId;
    string employeeName;
    int age;
    char gender;
    double salary;

public:
    Employee(int id, string name, int age, char gender, double salary) 
        : employeeId(id), employeeName(name), age(age), gender(gender), salary(salary) {}

    // Getters
    int getEmployeeId() const { return employeeId; }
    string getEmployeeName() const { return employeeName; }
    int getAge() const { return age; }
    char getGender() const { return gender; }
    double getSalary() const { return salary; }
};

class Solution {
public:
    static Employee* getEmployeeWithSecondLowestSalary(vector<Employee>& employees) {
        if (employees.size() < 2) return nullptr;

        double lowest = INT_MAX, secondLowest = INT_MAX;
        int secondLowestIndex = -1;

        for (int i = 0; i < employees.size(); i++) {
            if (employees[i].getSalary() < lowest) {
                lowest = employees[i].getSalary();
            }
        };

        for (int i = 0; i < employees.size(); i++) {
            if (employees[i].getSalary() > lowest && employees[i].getSalary() < secondLowest) {
                secondLowest = employees[i].getSalary();
                secondLowestIndex = i;
            }
        }

        if (secondLowestIndex == -1) return nullptr;
        return &employees[secondLowestIndex];
    };

    static int countEmployeesBasedOnAge(vector<Employee>& employees, int targetAge) {
        int count = 0;
        for (const auto& emp : employees) {
            if (emp.getAge() == targetAge) {
                count++;
            }
        }
        return count;
    };
};

int main() {
    int n;
    cin >> n;
    
    vector<Employee> employees;
    employees.reserve(n);
    
    for (int i = 0; i < n; i++) {
        int id, age;
        string name;
        char gender;
        double salary;
        
        cin >> id;
        cin.ignore();
        getline(cin, name);
        cin >> age >> gender >> salary;
        
        employees.emplace_back(id, name, age, gender, salary);
    }
    
    int targetAge;
    cin >> targetAge;
    
    Employee* secondLowest = Solution::getEmployeeWithSecondLowestSalary(employees);
    if (secondLowest != nullptr) {
        cout << secondLowest->getEmployeeId() << "#" << secondLowest->getEmployeeName() << endl;
    } else {
        cout << "Null" << endl;
    }
    
    int count = Solution::countEmployeesBasedOnAge(employees, targetAge);
    if (count > 0) {
        cout << count << endl;
    } else {
        cout << "No employee found for the given age" << endl;
    }
    
    return 0;
}