#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    int rollNo ;
    string name ;
    string branch ;
    double score;
    bool dayScholar;

public:
    // Constructor
    Student(int rollNo, string name , string branch , double score, bool dayScholar) {
        this->rollNo  = rollNo ;
        this->name  = name ;
        this->branch  = branch ;
        this->score = score;
        this->dayScholar = dayScholar;
    }

    // Setters
    void setRollNo (int rollNo ) { this->rollNo  = rollNo ; }
    void setCourseName(string name ) { this->name  = name ; }
    void setBranch (string branch ) { this->branch  = branch ; }
    void setScore(double score) { this->score = score; }
    void setDayScholar(bool dayScholar) { this->dayScholar = dayScholar; }

    // Getters
    int getRollNo () const { return rollNo ; }
    string getName() const { return name ; }
    string getBranch () const { return branch ; }
    double getScore() const { return score; }
    bool getDayScholar() const { return dayScholar; }
};

class Solution {
public:
    static int findCountOfDayscholarStudents (vector<Student> &students){
        int count = 0;
        for(int i=0; i<students.size(); i++){
            if(students[i].getDayScholar() == true && students[i].getScore() > 80){
                count++;
            }
        }
        return count;
    };

    // Function to find student with second highest score among non-day scholars
    static vector<Student> findStudentwithSecondHighestScore(vector<Student> &students){
        double highest = DBL_MIN, secondHighest = DBL_MIN;
        int secondHighestIndex = -1;
        vector<Student> result;

        for(int i=0; i<students.size(); i++){
            if(!students[i].getDayScholar()){
            if(students[i].getScore() > highest){
                highest = students[i].getScore();
            }
        }
    }

        for(int i=0; i<students.size(); i++){
            if (!students[i].getDayScholar()) {
            if(secondHighest < highest && secondHighest < students[i].getScore()){
                secondHighest = students[i].getScore();
                secondHighestIndex = i;
            }
        }
    }
         result.push_back(students[secondHighestIndex]);
         return result;
    };
};

int main() {
     vector<Student> students;

    int size;
    cout << "Entert totol no of students : ";
    cin >> size;

    for(int i=0; i<size; i++){
        cout << "Enter student "<< i+1 << endl;
        int no;
        string name, branch;
        double score;
        bool dayScholar;

        cout << "Roll no : ";
        cin >> no;

        cin.ignore();

        cout << "Name is : ";
        getline(cin , name);

        cout << "Branch : ";
        getline(cin , branch);

        cout << "Score : ";
        cin >> score;

        cout << "dayScholar : ";
        cin >> dayScholar;

        students.emplace_back(no , name, branch, score, dayScholar);
    };

    int count = Solution::findCountOfDayscholarStudents(students);
    if(count > 0){
        cout << count << endl;
    }else {
        cout << "There are no such dayscholar students" << endl;
    }

    vector<Student> secondHighest = Solution::findStudentwithSecondHighestScore(students);
    if(!secondHighest.empty()){
        cout << secondHighest[0].getRollNo() << "#" <<secondHighest[0].getName() << "#" << secondHighest[0].getScore() << endl;
    }else {
    cout << "There are no student from non day scholar" << endl;

    return 0;
}
}