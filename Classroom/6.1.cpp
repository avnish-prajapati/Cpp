#include <iostream>
#include <string>

using namespace std;

class Admin {

private:
    double total_annual_revenue;

protected:
    string company_name;
    double manager_salary;
    double employee_salary;
    int total_staff;
    bool can_terminate;

public:

    Admin() {
        company_name = "ABC Company";
        manager_salary = 50000;
        employee_salary = 25000;
        total_staff = 50;
        total_annual_revenue = 1000000;
        can_terminate = true;
    }

    void myAccess() {
        cout << "Company Name: " << company_name << endl;
        cout << "Manager Salary: " << manager_salary << endl;
        cout << "Employee Salary: " << employee_salary << endl;
        cout << "Total Staff: " << total_staff << endl;
        cout << "Total Annual Revenue: " << total_annual_revenue << endl;
        cout << "Can Terminate: " << boolalpha << can_terminate << endl;
    }
};

class Manager : public Admin {

private:
    using Admin::manager_salary;
    using Admin::can_terminate;

public:

    void myAccess() {
        cout << "Company Name: " << company_name << endl;
        cout << "Manager Salary: " << manager_salary << endl;
        cout << "Employee Salary: " << employee_salary << endl;
        cout << "Total Staff: " << total_staff << endl;
        cout << "Can Terminate: " << boolalpha << can_terminate << endl;
    }
};

class Employee : public Manager {

public:

    void myAccess() {
        cout << "Company Name: " << company_name << endl;
        cout << "Employee Salary: " << employee_salary << endl;
        cout << "Total Staff: " << total_staff << endl;
    }
};

int main() {

    Admin a;
    Manager m;
    Employee e;

    cout << "Admin Class" << endl;
    a.myAccess();

    cout << endl;

    cout << "Manager Class" << endl;
    m.myAccess();

    cout << endl;

    cout << "Employee Class" << endl;
    e.myAccess();

    return 0;
}

