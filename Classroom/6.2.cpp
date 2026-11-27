#include <iostream>
using namespace std;


class Area
{
protected:
    virtual void calculate() = 0;
};

class Circle : public Area
{
public:
    void calculate()
    {
        float r;

        cout << "Enter radius: ";
        cin >> r;

        cout << "Area of Circle: " << 3.14 * r * r << endl;
    }
};

class Triangle : public Area
{
public:
    void calculate()
    {
        float b, h;

        cout << "Enter base: ";
        cin >> b;

        cout << "Enter height: ";
        cin >> h;

        cout << "Area of Triangle: " << 0.5 * b * h << endl;
    }
};

class Rectangle : public Area
{
public:
    void calculate()
    {
        float l, w;

        cout << "Enter length: ";
        cin >> l;

        cout << "Enter width: ";
        cin >> w;

        cout << "Area of Rectangle: " << l * w << endl;
    }
};

int main()
{
    Circle c;
    Triangle t;
    Rectangle r;

    c.calculate();

    t.calculate();

    r.calculate();

    return 0;
}

