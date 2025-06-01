#include <bits/stdc++.h>
using namespace std;

class RRT
{
private:
    int ticketNo;
    string raisedBy;
    string assignedTo;
    int priority;
    string project;

public:
    // Constructor
    RRT(int ticketNo, string raisedBy, string assignedTo, int priority, string project)
    {
        this->ticketNo = ticketNo;
        this->raisedBy = raisedBy;
        this->assignedTo = assignedTo;
        this->priority = priority;
        this->project = project;
    }

    // Setters
    void setTicketNo(int ticketNo) { this->ticketNo = ticketNo; }
    void setRaisedBy(string raisedBy) { this->raisedBy = raisedBy; }
    void setAssignedTo(string assignedTo) { this->assignedTo = assignedTo; }
    void setPriority(int priority) { this->priority = priority; }
    void setproject(string project) {this->project = project; }

    // Getters
    int getTicketNo() const { return ticketNo; }
    string getRaisedBy() const { return raisedBy; }
    string getAssignedTo() const { return assignedTo; }
    int getPriority() const { return priority; }
    string getProject() const { return project; }
};

class MyClass
{
public:

     static vector<RRT> getHighestPriorityTicket(vector<RRT>& rrt, string project) {
        vector<RRT> result;

        if (rrt.empty()) return result;

        int HighPrio = INT_MAX;
        int index = -1; // default to not found
        for (int i = 0; i < rrt.size(); i++) {
            if (rrt[i].getProject() == project && HighPrio > rrt[i].getPriority()) {
                HighPrio = rrt[i].getPriority();
                index = i;
            }
        }

        if (index != -1) {
            result.push_back(rrt[index]);
        }

        return result;
    };
};

int main () {
    vector<RRT> rrt;
    int n;
    cout << "Enter total RRTs : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        cout << "RRT " << i + 1 << " details :" << endl;

        int ticketNo;
        string raisedBy;
        string assignedTo;
        int priority;
        string project;

        cout << "ticketNo : ";
        cin >> ticketNo;

        cout << "raisedBy : ";
        cin.ignore();
        getline(cin, raisedBy);

        cout << "assignedTo : ";
        cin.ignore();
        getline(cin, assignedTo);
     
        cout << "priority : ";
        cin >> priority;

        cout << "project : ";
        cin.ignore();
        getline(cin, project);


        rrt.emplace_back(ticketNo, raisedBy, assignedTo, priority, project);
    }

    string targetProject;
    cout << "enter Project : ";
    cin.ignore();
    getline(cin, targetProject);

    vector<RRT> ans = MyClass::getHighestPriorityTicket(rrt, targetProject);
    if (!ans.empty())
    {
        cout << "ticketNo- " << ans[0].getTicketNo() << endl;
        cout << "raisedBy- " << ans[0].getRaisedBy() << endl;
        cout << "assignedTo- " << ans[0].getAssignedTo() << endl;
    }
    else
    {
        cout << "No such Ticket";
    }

    return 0;
}