#include<iostream>
#include<queue>
#include<vector>
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

    for (int i = 0; i < 5; i++) {
        Patient p;

        cout << "Please enter name of the patient: ";
        cin >> p.name;
        cout << "Please enter priority level (higher number = more severe): ";
        cin >> p.priority;
        cout << endl;
        pq.push(p);

    }

    cout << "Order of patients to be treated: " << endl;

    while (!pq.empty()) {
        Patient p = pq.top();
        pq.pop();
        cout << "Name: " << p.name << " (priority " << p.priority << ")" << endl;
    }

    return 0;
}
