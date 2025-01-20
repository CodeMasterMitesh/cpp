#include<iostream>
using namespace std;
// types of inheritance
// 1 single leval inheritance

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

main()
{
    Bus b1;
}