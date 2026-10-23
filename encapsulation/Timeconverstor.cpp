
#include <iostream>
using namespace std;

class Convert {

private:
    int seconds;
    int hh, mm, ss;

public:
    void setData(int s) {
        seconds = s;
    }

    void convertTime() {
        hh = seconds / 3600;
        mm = (seconds % 3600) / 60;
        ss = seconds % 60;
    }

    void display() {
        cout << "Seconds : " << seconds << endl;
        cout << "Time    : " << hh << ":" << mm << ":" << ss << endl;
    }
};

int main() {
    Convert a;

    int s;

    cout << "Enter seconds: ";
    cin >> s;

    a.setData(s);
    a.convertTime();
    a.display();

    return 0;
}
