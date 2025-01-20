#include <iostream>
using namespace std;

class Car
{
    string company;
    string name;
    int price;
    static int model;

public:
    void setData()
    {
        cout << "Enter Car Company: ";
        cin >> company;
        cout << "Enter Car Name: ";
        cin >> name;
        cout << "Enter Car Price: ";
        cin >> price;
    }

    void showData()
    {
        cout << "Company=" << company << endl;
        cout << "Name=" << name << endl;
        cout << "Price=" << price << endl;
    }

    static void showModel()
    {
        cout << "Model = " << model;
    }

    static Car highestCarPrice(Car &x, Car &y, Car &z)
    {
        Car HCPD = x;
        if (y.price > HCPD.price)
        {
            HCPD = y;
        }
        if (z.price > HCPD.price)
        {
            HCPD = z;
        }
        return HCPD;
    }

    static Car lowestCarPrice(Car &x, Car &y, Car &z)
    {
        Car LCPD = x;
        if (y.price < LCPD.price)
        {
            LCPD = y;
        }
        if (z.price < LCPD.price)
        {
            LCPD = z;
        }
        return LCPD;
    }

};
int Car::model = 2019; // define
int main()
{
    system("cls");
    Car c1, c2, c3, highest, lowest;
    c1.setData();
    c1.showData();

    c2.setData();
    c2.showData();

    c3.setData();
    c3.showData();

    highest = Car::highestCarPrice(c1, c2, c3);
    cout << "Car with the Highest Price:" << endl;
    highest.showData();
    cout << endl;

    lowest = Car::lowestCarPrice(c1, c2, c3);
    cout << "Car with the Lowest Price:" << endl;
    lowest.showData();
    cout << endl;

    Car::showModel();
    return 0;
}