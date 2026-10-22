#include <iostream>

using namespace std;

class Convert {
public:
    float inches;
    float feet;

    void setData(float i) {
        inches = i;
    }

    void convertFeet() {
        feet = inches / 12;
    }

    void display() {
        cout << "Inches : " << inches << endl;
        cout << "Feet   : " << feet << endl;
    }
};

int main() {
    Convert a;

    float i;

    cout << "Enter inches: ";
    cin >> i;

    a.setData(i);
    a.convertFeet();
    a.display();

    return 0;
}
