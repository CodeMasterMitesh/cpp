#include<iostream>
using namespace std;
// types of inheritance
// 2 Multiple inheritance

class Vehicle{
    public:
    Vehicle()
    {
        cout<<"This is Vehicle class Constructor\n";
    }
};
class Horn : public Vehicle{
    public:
    Horn()
    {
     cout<<"This is Horn class Constructor\n";   
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
    // Bus b1;
    Horn h1;
}