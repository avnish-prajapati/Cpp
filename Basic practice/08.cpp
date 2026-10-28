#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, max, min;

    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;

    max = a;
    min = a;

    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;
    if (b < min) min = b;
    if (c < min) min = c;
    if (d < min) min = d;

    cout << "Maximum = " << max<< endl;
    cout << "Minimum = " << min << endl;
    return 0;
}
