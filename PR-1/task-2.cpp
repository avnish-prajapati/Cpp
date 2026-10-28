#include <iostream>
using namespace std;

class Car {
    
    string company;
    string model;
    string color;
    int year;
    float price;

public:
    
    Car() {
        this->company = "";
        this->model = "";
        this->color = "";
        this->year = 0;
        this->price = 0;
    }

    
    void setData() {
        cout << "Enter car company: ";
        cin >> this->company;

        cout << "Enter car model: ";
        cin >> this->model;

        cout << "Enter car color: ";
        cin >> this->color;

        cout << "Enter manufacturing year: ";
        cin >> this->year;

        cout << "Enter car price: ";
        cin >> this->price;
    }

    // print all data
    void displayData() {
        cout << "Company: " << this->company << endl;
        cout << "Model: " << this->model << endl;
        cout << "Color: " << this->color << endl;
        cout << "Year: " << this->year << endl;
        cout << "Price: " << this->price << endl;
    }
};

int main() {
    Car c1;

    c1.setData();
    c1.displayData();

    return 0;
};

