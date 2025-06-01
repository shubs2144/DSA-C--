#include <bits/stdc++.h>
using namespace std;

class College
{
private:
    int id;
    string name;
    int contactNo;
    string address;
    int pinCode;

public:
    // Constructor
    College(int id, string name, int contactNo, string address, int pinCode)
    {
        this->id = id;
        this->name = name;
        this->contactNo = contactNo;
        this->address = address;
        this->pinCode = pinCode;
    }

    // Setters
    void setId(int id) { this->id = id; }
    void setName(string name) { this->name = name; }
    void setContactNo(int contactNo) { this->contactNo = contactNo; }
    void setAddress(string address) { this->address = address; }
    void setPinCode(int pinCode) { this->pinCode = pinCode; }

    // Getters
    int getId() const { return id; }
    string getName() const { return name; }
    int getNo() const { return contactNo; }
    string getAddress() const { return address; }
    int getPinCode() const { return pinCode; }
};

class Solution
{
public:
    static vector<College> findCollegeWithMaximumPincode(vector<College> &colleges)
    {
        vector<College> result1;
        if (colleges.empty())
            return result1;
        int MaxIndex = 0;
        int MaxPin = colleges[0].getPinCode();

        for (int i = 0; i < colleges.size(); i++)
        {
            if (MaxPin < colleges[i].getPinCode()){
                MaxPin = colleges[i].getPinCode();
                MaxIndex = i;
            }
        }
         result1.push_back(colleges[MaxIndex]);
        return result1;
    };

    static vector<College> searchCollegeByAddress(vector<College> &colleges, string add)
    {
        int index = 0;
        vector<College> result2;
        for(int i=0; i<colleges.size(); i++){
            if(colleges[i].getAddress() == add){
                index = i;
                result2.push_back(colleges[index]);
            }
        }
        return result2;
    }
};

int main()
{
    vector<College> colleges;
    int n;
    cout << "Enter total colleges : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        cout << "college " << i + 1 << " details :" << endl;

        int id;
        string name;
        int contactNo;
        string add;
        int pin;

        cout << "id : ";
        cin >> id;

        cout << "name : ";
        cin.ignore();
        getline(cin, name);

        cout << "contactNo : ";
        cin >> contactNo;

        cout << "add : ";
        cin.ignore();
        getline(cin, add);

        cout << "pin : ";
        cin >> pin;

        colleges.emplace_back(id, name, contactNo, add, pin);
    }

    string targetAdd;
    cout << "enter address : ";
    cin.ignore();
    getline(cin, targetAdd);

    vector<College> MaxPin = Solution::findCollegeWithMaximumPincode(colleges);
    if (!MaxPin.empty())
    {
        cout << "id-" << MaxPin[0].getId() << endl;
        cout << "name-" << MaxPin[0].getName() << endl;
        cout << "No-" << MaxPin[0].getNo() << endl;
        cout << "add-" << MaxPin[0].getAddress() << endl;
        cout << "pin-" << MaxPin[0].getPinCode() << endl;
    }
    else
    {
        cout << "No college found with mentioned attribute" << endl;
    }

    vector<College> searchAdd = Solution::searchCollegeByAddress(colleges, targetAdd);
    if (!searchAdd.empty())
    {
        cout << "id-" << searchAdd[0].getId() << endl;
        cout << "name-" << searchAdd[0].getName() << endl;
        cout << "No-" << searchAdd[0].getNo() << endl;
        cout << "add-" << searchAdd[0].getAddress() << endl;
        cout << "pin-" << searchAdd[0].getPinCode() << endl;
    }
    else
    {
        cout << "No college found with mentioned attribute";
    }

    return 0;
}