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

    Student s2;          //create object of each student class
    s2.name = "Patil";
    s2.age = 22;
    s2.roll_no = 102;
    s2.course = "Pharmacy";

    s2.printInfo(); // Calling Method

    // Above code is not efficient as we have to create object for each student and then assign values to it. 
    // We can use Constructor to make it more efficient.




    return 0;
}

// Another Example

// class Home {
// public: 
//     string Name;
//     int Floor;
//     int No_of_Rooms;
//     int No_of_Bathrooms;
//     string Address;

//     void HomeInfo() {
//         cout << "Name: " << Name << endl;
//         cout << "Floor: " << Floor << endl;
//         cout << "No of Rooms: " << No_of_Rooms << endl;
//         cout << "No of Bathrooms: " << No_of_Bathrooms << endl;
//         cout << "Address: " << Address << endl;
//     }

// };

// int main() {
//     Home h1;
//     h1.Name = "Shubham's Home";
//     h1.Floor = 2;
//     h1.No_of_Rooms = 4;
//     h1.No_of_Bathrooms = 2;
//     h1.Address = "Bengaluru, India";
    
//     HomeInfo();

//     Home h2;
//     h2.Name = "Sakshi's Home";
//     h2.Floor = 1;
//     h2.No_of_Rooms = 3;
//     h2.No_of_Bathrooms = 1;
//     h2.Address = "Mumbai, India";

//     return 0;
// }