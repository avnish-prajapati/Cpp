#include <iostream>
using namespace std;

int main() {
    int a, b, c, max, min;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    max = a;
    min = a;

    if (b > max) max = b;
    if (c > max) max = c;
    if (b < min) min = b;
    if (c < min) min = c;

    cout << "Maximum = " << max << endl;
    cout << "Minimum = " << min << endl;
    return 0;
}
