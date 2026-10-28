#include <iostream>
using namespace std;

class Timer {
   
    int userInput;
    int seconds, minutes, hours;

public:
    // the constructor
    Timer(int seconds) {
        this->userInput = seconds;
    }

    
    void convertTime() {
        this->minutes = this->userInput / 60;
        this->seconds = this->userInput % 60;
        this->hours = this->minutes / 60;
        this->minutes = this->minutes % 60;
    }

   
    void displayTime() {
        cout << "hh:mm:ss : "
             << this->hours << " : "
             << this->minutes << " : "
             << this->seconds << endl;
    }
};

int main() {
    int seconds;

    cout << "Enter total seconds: ";
    cin >> seconds;

    Timer t1(seconds);

    t1.convertTime();
    t1.displayTime();

    return 0;
};
