
#include <iostream>
#include <string>
using namespace std;

class Student {

private:
    int rollno;
    string name;
    string studentClass;
    string medium;
    string grade;

public:
    void setStudent(int roll, string n, string cls, string med, string g) {
        rollno = roll;
        name = n;
        studentClass = cls;
        medium = med;
        grade = g;
    }

    void getStudent() {
        cout << endl;
        cout << "Roll No   : " << rollno << endl;
        cout << "Name      : " << name << endl;
        cout << "Class     : " << studentClass << endl;
        cout << "Medium    : " << medium << endl;
        cout << "Grade     : " << grade << endl;
        cout << endl;
    }
};

int main() {
    Student a, b, c, x, y;

    int roll;
    string name;
    string cls;
    string med;
    string g;

    cout << "\nEnter Student 1 : ";
    cin >> roll >> name >> cls >> med >> g;
    a.setStudent(roll, name, cls, med, g);

    cout << "\nEnter Student 2 : ";
    cin >> roll >> name >> cls >> med >> g;
    b.setStudent(roll, name, cls, med, g);

    cout << "\nEnter Student 3 : ";
    cin >> roll >> name >> cls >> med >> g;
    c.setStudent(roll, name, cls, med, g);

    cout << "\nEnter Student 4 : ";
    cin >> roll >> name >> cls >> med >> g;
    x.setStudent(roll, name, cls, med, g);

    cout << "\nEnter Student 5 : ";
    cin >> roll >> name >> cls >> med >> g;
    y.setStudent(roll, name, cls, med, g);

    cout << endl;

    a.getStudent();
    b.getStudent();
    c.getStudent();
    x.getStudent();
    y.getStudent();

    return 0;
}
