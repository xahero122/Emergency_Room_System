#include<iostream>
#include<queue>
using namespace std;

struct Patient {
    string name;
    int priority;

    bool operator<(const Patient& other) const{
        return priority < other.priority;
    }
};

int main() {

    priority_queue<Patient> pq;

    for (int i = 0; i >= 0; i++) {

        Patient p;

        cout << "Please enter patients' name: ";
        cin >> p.name;

        if (p.name == "0") {
            break;
        }

        cout << "Enter the priority level (higher number = more severe)";
        cin >> p.priority;
        pq.push(p);
    }

    while (!pq.empty()) {
        Patient p = pq.top();
        pq.pop();
        cout << "Name: " << p.name << "(Priority " << p.priority << " )" << endl;
        
    }

    return 0;
}