#include<iostream>
using namespace std;
// types of inheritance
// 3 Multi leval inheritance

class Vehicle{
    public:
    Vehicle()
    {
        cout<<"This is Vehicle class Constructor\n";
    }
};

class Bus : public Vehicle{
    public:
    Bus()
    {
     cout<<"This is Bus class Constructor\n";   
    }
};

class MiniBus : public Bus{
    public:
    MiniBus()
    {
     cout<<"This is MiniBus class Constructor\n";   
    }
};

main()
{
    MiniBus m1;
}