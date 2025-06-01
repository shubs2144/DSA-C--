#include <bits/stdc++.h>
using namespace std;

class Course {
private:
    int courseId;
    string courseName;
    string courseAdmin;
    int quiz;
    int handson;

public:
    // Constructor
    Course(int courseId, string courseName, string courseAdmin, int quiz, int handson) {
        this->courseId = courseId;
        this->courseName = courseName;
        this->courseAdmin = courseAdmin;
        this->quiz = quiz;
        this->handson = handson;
    }

    // Setters
    void setCourseId(int courseId) { this->courseId = courseId; }
    void setCourseName(string courseName) { this->courseName = courseName; }
    void setCourseAdmin(string courseAdmin) { this->courseAdmin = courseAdmin; }
    void setQuiz(int quiz) { this->quiz = quiz; }
    void setHandsOn(int handson) { this->handson = handson; }

    // Getters
    int getCourseId() const { return courseId; }
    string getCourseName() const { return courseName; }
    string getCourseAdmin() const { return courseAdmin; }
    int getQuiz() const { return quiz; }
    int getHandsOn() const { return handson; }
};

class courseProgram {
public:
    static int findAvgOfQuizByAdmin(vector<Course> &courses, string admin) {
        int count = 0, sum = 0;
        for (int i = 0; i < courses.size(); i++) {
            if (courses[i].getCourseAdmin() == admin) {
                sum += courses[i].getQuiz();
                count++;
            }
        }
        return (count == 0) ? 0 : (sum / count);
    }

    static vector<Course> sortCourseByHandsOn( vector<Course> &courses, int maxHandson) {
        vector<Course> filtered;

        for (int i = 0; i < courses.size(); i++) {
            if (courses[i].getHandsOn() < maxHandson) {
                filtered.push_back(courses[i]);
            }
        }

        if (filtered.empty()) return {};
        
        // This is a lambda function used as a custom comparator.
        sort(filtered.begin(), filtered.end(), [](Course& a, Course& b) {
            return a.getHandsOn() < b.getHandsOn();
        });

        return filtered;
    }
};

int main() {
    vector<Course> courses;
    int n;
    cout << "enter total courses : ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int id, quiz, handson;
        string name, admin;
        cout << "Enter info : " << endl;
        cin >> id >> ws;
        getline(cin, name);
        getline(cin, admin);
        cin >> quiz >> handson;
        courses.emplace_back(id, name, admin, quiz, handson);
    }

    string admin;
    int hand;
    cin.ignore(); // clear newline before getline
    getline(cin, admin);
    cin >> hand;

    int ans1 = courseProgram::findAvgOfQuizByAdmin(courses, admin);
    if (ans1 != 0) {
        cout << ans1 << endl;
    } else {
        cout << "No Course found" << endl;
    }

    vector<Course> ans2 = courseProgram::sortCourseByHandsOn(courses, hand);
    if (!ans2.empty()) {
        for (auto& c : ans2) {
            cout << c.getCourseName() << endl;
        }
    } else {
        cout << "No Course found with mentioned attribute." << endl;
    }

    return 0;
}
