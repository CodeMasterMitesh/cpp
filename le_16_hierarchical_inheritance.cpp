#include<iostream>
using namespace std;
// types of inheritance
// 4 hierarchical inheritance

class Vehicle{
    public:
    Vehicle()
    {
        cout<<"This is Vehicle class Constructor\n";
    }
};

class Bus : public Vehicle
{
    public:
    Bus()
    {
     cout<<"This is Bus class Constructor\n";   
    }
};

class MiniBus : public Vehicle{
    public:
    MiniBus()
    {
     cout<<"This is MiniBus class Constructor\n";   
    }
};

main()
{
    Bus b1;
}