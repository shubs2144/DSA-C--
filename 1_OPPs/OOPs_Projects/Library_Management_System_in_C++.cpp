#include <iostream>
#include <string>
using namespace std;

// Book class demonstrating Encapsulation, Static Members, and Friend Function
class Book {
private:
int bookId;
string title;
string author;
static int bookCount;

public:
Book(int id, string t, string a) {
    bookId = id;
    title = t;
    author = a;
bookCount++;
}


~Book() {
    bookCount--;
}

void display() {
    cout << "BookID: " << bookId << ", Title: " << title << ", Author: " << author << endl;
}

static int getBookCount() {
    return bookCount;
}

friend class Library; // Friend class can access private members
};

int Book::bookCount = 0;

// Abstract User class (Abstraction + Polymorphism)
class User {
protected:
int userId;
string name;

public:
User(int id, string n) : userId(id), name(n) {}


virtual void displayDetails() = 0; // Pure virtual function

virtual ~User() {}
};

// Inheritance + Polymorphism
class Student : public User {
public:
Student(int id, string n) : User(id, n) {}


void displayDetails() override {
    cout << "Student ID: " << userId << ", Name: " << name << endl;
}
};

class Teacher : public User {
public:
Teacher(int id, string n) : User(id, n) {}


void displayDetails() override {
    cout << "Teacher ID: " << userId << ", Name: " << name << endl;
}
};

// Friend class demonstrating access to Book's private members
class Library {
public:
void showBookDetails(Book& b) {
cout << "[LIBRARY REPORT] Book ID: " << b.bookId << ", Title: " << b.title << endl;
}
};

// Main Function - Demonstrates OOP concepts
int main() {
// Book objects
Book b1(101, "C++ Basics", "Bjarne Stroustrup");
Book b2(102, "OOP in Depth", "Stroustrup");

b1.display();
b2.display();

cout << "Total Books: " << Book::getBookCount() << endl;

// User Polymorphism
User* users[2];
users[0] = new Student(1, "Shubham");
users[1] = new Teacher(2, "Mr. Sharma");

for (int i = 0; i < 2; i++) {
    users[i]->displayDetails(); // Runtime Polymorphism
}

// Friend function usage
Library lib;
lib.showBookDetails(b1);

// Clean up
for (int i = 0; i < 2; i++) {
    delete users[i]; // Virtual destructor
}

return 0;
}