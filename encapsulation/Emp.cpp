
#include <iostream>
#include <string>
using namespace std;

class Employee {

private:
    int empid;
    string empname;
    string department;
    float salary;
    int experience;

public:
    void setEmp(int id, string name, string dept, float sal, int exp) {
        empid = id;
        empname = name;
        department = dept;
        salary = sal;
        experience = exp;
    }

    void getEmp() {
        cout << endl;
        cout << "Employee ID   : " << empid << endl;
        cout << "Employee Name : " << empname << endl;
        cout << "Department    : " << department << endl;
        cout << "Salary        : " << salary << endl;
        cout << "Experience    : " << experience << " years" << endl;
        cout << endl;
    }
};

int main() {
    Employee a, b, c, x, y;

    int id;
    string name;
    string dept;
    float sal;
    int exp;

    cout << "\nEnter Employee 1 : ";
    cin >> id >> name >> dept >> sal >> exp;
    a.setEmp(id, name, dept, sal, exp);

    cout << "\nEnter Employee 2 : ";
    cin >> id >> name >> dept >> sal >> exp;
    b.setEmp(id, name, dept, sal, exp);

    cout << "\nEnter Employee 3 : ";
    cin >> id >> name >> dept >> sal >> exp;
    c.setEmp(id, name, dept, sal, exp);

    cout << "\nEnter Employee 4 : ";
    cin >> id >> name >> dept >> sal >> exp;
    x.setEmp(id, name, dept, sal, exp);

    cout << "\nEnter Employee 5 : ";
    cin >> id >> name >> dept >> sal >> exp;
    y.setEmp(id, name, dept, sal, exp);

    cout << endl;

    a.getEmp();
    b.getEmp();
    c.getEmp();
    x.getEmp();
    y.getEmp();

    return 0;
}
