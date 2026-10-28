#include <iostream>
using namespace std;

class Converter {
    
    float inches,feet;
   

public:
   
    Converter(float inches) {
        this->inches = inches;
    }

    
    void convertInches() {
        this->feet = this->inches / 12;
    }

    
    void Result() {
        cout << "Inches: " << this->inches << endl;
        cout << "Feet: " << this->feet << endl;
    }
};

int main() {
    float inches;

    cout << "Enter inches: ";
    cin >> inches;

    Converter s1(inches);

    s1.convertInches();
    s1.Result();

    return 0;
};
