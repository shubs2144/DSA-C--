#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Employee {
private:
    int id;
    string name;
    int age;
    char gender;
    double salary;

public:
    Employee(int id, string name, int age, char gender, double salary) {
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

class Solution {
public:
    // Count employees based on age
    static int countEmployeesBasedOnAge(vector<Employee>& empList, int targetAge){
        int count = 0;
        for (int i = 0; i < empList.size(); i++) {
            if (empList[i].getAge() == targetAge) {
                count++;
            }
        }
        return count;
    }

    // Get employees with second lowest salary
    static vector<Employee> getEmployeeWithSecondLowestSalary(vector<Employee>& empList){
        vector<Employee> result;

        if (empList.size() < 2) return result;

        // Sort by salary
        sort(empList.begin(), empList.end(), [](Employee& a, Employee& b){
            return a.getSalary() < b.getSalary();
        });

        double firstLowest = empList[0].getSalary();
        double secondLowest = -1;

        for (int i = 1; i < empList.size(); i++) {
            if (empList[i].getSalary() > firstLowest) {
                secondLowest = empList[i].getSalary();
                break;
            }
        }

        if (secondLowest == -1) return result;

        for (const auto& emp : empList) {
            if (emp.getSalary() == secondLowest) {
                result.push_back(emp);
            }
        }

        return result;
    }
};

int main() {
    int n;
    cout << "Enter the total number of employees: ";
    cin >> n;

    vector<Employee> empList;

    for (int i = 0; i < n; i++) {
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

    // Get employees with second lowest salary
    vector<Employee> secondLowest = Solution::getEmployeeWithSecondLowestSalary(empList);
    if (!secondLowest.empty()) {
        for (const auto& emp : secondLowest) {
            cout << emp.getName() << "#" << emp.getId() << endl;
        }
    } else {
        cout << "Null" << endl;
    }

    // Count employees by age
    int count = Solution::countEmployeesBasedOnAge(empList, targetAge);
    if (count > 0) {
        cout << count << endl;
    } else {
        cout << "No employee found for the given age" << endl;
    }

    return 0;
}
