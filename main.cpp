#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int id;
    string name;
    float gpa;

    void displayInfo() {
        cout << "ID: " << id << " | Name: " << name << " | GPA: " << gpa << endl;
    }
};

int main() {
    Student s1;
    s1.id = 101;
    s1.name = "Samra";
    s1.gpa = 3.8;

    cout << "--- Student Details ---" << endl;
    s1.displayInfo();

    return 0;
}s