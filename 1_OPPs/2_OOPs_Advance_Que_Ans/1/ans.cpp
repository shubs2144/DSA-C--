#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cfloat> // for DBL_MAX

using namespace std;

class Employee
{
private:
    int id;
    string name;
    int age;
    char gender;
    double salary;

public:
    Employee(int id, string name, int age, char ge nder, double salary)
    {
        this->id = id;
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->salary = salary;
    }

    int getId() const { return id; }
    string getName() const { return name; }
    int getAge() const { return age; }
    char getGender() const { return gender; }
    double getSalary() const { return salary; }
};

class Solution
{
public:
    static int countEmployeesBasedOnAge(vector<Employee> &empList, int targetAge)
    {
        int count = 0;
        for (int i = 0; i < empList.size(); i++)
        {
            if (empList[i].getAge() == targetAge)
            {
                count++;
            }
        }
        return count;
    }

static vector<Employee> getEmployeeWithSecondLowestSalary(vector<Employee> &empList)
{
    double lowest = DBL_MAX, secondLowest = DBL_MAX;
    int secondLowestIndex = -1;
    vector<Employee> result;

    if (empList.size() < 2)
        return result;

    // Find the lowest salary
    for (int i = 0; i < empList.size(); i++)
    {
        if (empList[i].getSalary() < lowest)
        {
            lowest = empList[i].getSalary();
        }
    }

    // Find the second lowest salary
    for (int i = 0; i < empList.size(); i++)
    {
        double sal = empList[i].getSalary();
        if (sal > lowest && sal < secondLowest)
        {
            secondLowest = sal;
            secondLowestIndex = i;
        }
    }

    // If no second lowest found (e.g., all salaries same)
    if (secondLowestIndex == -1)
    {
        return result; // returns empty
    }

    result.push_back(empList[secondLowestIndex]);
    return result;
}

};

int main()
{
    vector<Employee> empList;

    int n;
    cout << "Enter the total number of : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int id, age;
        string name;
        char gender;
        double salary;

        cout << "Enter employee " << i + 1 << " details:\n";
        cin >> id;
        cin.ignore(); // flush newline
        getline(cin, name);
        cin >> age >> gender >> salary;
        cin.ignore();

        empList.emplace_back(id, name, age, gender, salary);
    }

    int targetAge;
    cout << "Enter target age: ";
    cin >> targetAge;

    vector<Employee> secondLowest = Solution::getEmployeeWithSecondLowestSalary(empList);
    if (!secondLowest.empty())
    {
        cout << secondLowest[0].getName() << "#" << secondLowest[0].getId() << endl;
    }
    else
    {
        cout << "Null" << endl;
    };

    int count = Solution::countEmployeesBasedOnAge(empList, targetAge);
    if (count > 0)
    {
        cout << count << endl;
    }
    else
    {
        cout << "No employee found for the given age" << endl;
    }

    return 0;
}
