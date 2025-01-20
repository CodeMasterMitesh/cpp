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
     cout<<"This is Horn class Constructor\n";   
    }
};
class Bus : public Vehicle,public Horn
{
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
    Bus b1;
}