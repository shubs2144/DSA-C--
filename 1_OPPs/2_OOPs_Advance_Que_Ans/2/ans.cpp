#include <bits/stdc++.h>

using namespace std;

class Employee
{
private:
    int id;
    string name;
    string designation;
    double salary;

public:

    Employee() {}

    Employee(int id, string name, string designation, double salary){
        this->id = id;
        this->name = name;
        this->designation = designation;
        this->salary = salary;
    };

    int getId() const { return id; }
    string getName() const { return name; }
    string getDesignation() const { return designation; }
    double getSalary() const { return salary; }
};

class Company
{
private:
    string companyName;
    vector<Employee> employees;

public:
    Company(string companyName, const vector<Employee>& empList){
        this->companyName = companyName;
        this->employees = empList;
    };

    double getAverageSalary() {
        double sum = 0;
        for(int i=0; i<employees.size(); i++){
            sum += employees[i].getSalary();
        }
        return (employees.size() > 0)? sum/employees.size() : 0.0;
    }

    double getMaxSalary(){
        int maxSalary = employees[0].getSalary();
         for(int i=0; i<employees.size(); i++){
            if( maxSalary < employees[i].getSalary()){
                maxSalary = employees[i].getSalary();
            }
         }
         return maxSalary;
    }

    vector<Employee> getEmployeesByDesignation(string d){
        vector<Employee> matched;
        for (int i = 0; i < employees.size(); i++) {
            if (equalsIgnoreCase(employees[i].getDesignation(), d)) {
                matched.push_back(employees[i]);
            }
        }
        return matched;
    }

private:
    static string toLower(const string& str) {
        string res = str;
        transform(res.begin(), res.end(), res.begin(), ::tolower); 
        return res;
    }

    static bool equalsIgnoreCase(const string& a, const string& b) {
        return toLower(a) == toLower(b);
    }

};

int main() {

    string companyName;
    cout << "Enter company name : ";
    cin.ignore();
    getline(cin, companyName);

    int numEmployees;
    cout << "Enter the total number of employees : ";
    cin >> numEmployees;

    vector<Employee> empList;

    cout << "Enter employee details: " << endl;
    for(int i=0; i<numEmployees; i++){
        
        int id;
        string name, designation;
        double salary;

        cout << "Enter employee " << i + 1 << " details:\n";

        cout << "Enter id: ";
        cin >> id;
        cin.ignore();

        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter designation: ";
        getline(cin, designation);

        cout << "Enter salary: ";
        cin >> salary;
        cin.ignore();

        empList.emplace_back(id, name, designation, salary);


    }

    Company com(companyName, empList);

    cout << "Output " << endl;
    
    cout << "Average salary : " << fixed << setprecision(1) << com.getAverageSalary() << endl; 
    cout << "max salary : " << fixed << setprecision(1) << com.getMaxSalary() << endl;

    cout << "Enployee with Designation: ";
    string designation;
    getline(cin, designation);

    vector<Employee> filtered = com.getEmployeesByDesignation(designation);
    if(!filtered.empty()){
        for(auto& emp : filtered){
            cout << "ID: " << emp.getId();
            cout << ", Name: " << emp.getName();
            cout << ", Designation: " << emp.getDesignation();
            cout << ", Salary: " << emp.getSalary() << endl;
        }
    }

    return 0;
}