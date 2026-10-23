
#include <iostream>
#include <string>
using namespace std;

class Car {

private:
    int modelNo;
    string modelName;
    string companyName;
    float price;
    bool isEv;

public:
    void setCar(int no, string name, string cname, float amt, bool isev)
    {
        modelNo = no;
        modelName = name;
        companyName = cname;
        price = amt;
        isEv = isev;
    }

    void getCar()
    {
        cout << "\n--- Car Details ---" << endl;
        cout << "Model No: " << modelNo << endl;
        cout << "Model Name: " << modelName << endl;
        cout << "Company Name: " << companyName << endl;
        cout << "Price: " << price << endl;
        cout << "Is EV: " << isEv << endl;
    }
};

int main()
{
    Car a, b, c, x, y;

    int no;
    string name, cname;
    float amt;
    bool isev;

    cout << "Enter car details a: ";
    cin >> no >> name >> cname >> amt >> isev;
    a.setCar(no, name, cname, amt, isev);
    a.getCar();

    cout << "Enter car details b: ";
    cin >> no >> name >> cname >> amt >> isev;
    b.setCar(no, name, cname, amt, isev);
    b.getCar();

    cout << "Enter car details c: ";
    cin >> no >> name >> cname >> amt >> isev;
    c.setCar(no, name, cname, amt, isev);
    c.getCar();

    cout << "Enter car details x: ";
    cin >> no >> name >> cname >> amt >> isev;
    x.setCar(no, name, cname, amt, isev);
    x.getCar();

    cout << "Enter car details y: ";
    cin >> no >> name >> cname >> amt >> isev;
    y.setCar(no, name, cname, amt, isev);
    y.getCar();

    return 0;
}
