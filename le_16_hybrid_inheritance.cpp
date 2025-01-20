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
class Horn
{
    public:
    Horn()
    {
     cout<<"Peep Peep\n";   
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

class MiniBus : public Bus
{
    public:
    MiniBus()
    {
     cout<<"This is MiniBus class Constructor\n";   
    }
};

class SportBus : public Horn
{
    public:
    SportBus()
    {
     cout<<"This is SportBus class Constructor\n";   
    }
};

main()
{
    SportBus s1;
}