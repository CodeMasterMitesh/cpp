#include<iostream>
using namespace std;
// types of inheritance
// 2 Multiple inheritance

//1 parent class 
class Vehicle{
    public:
    Vehicle()
    {
        cout<<"This is Vehicle class Constructor\n";
    }
};
//2 parent class 
class Horn 
{
    public:
    Horn()
    {
     cout<<"This is Horn class Constructor\n";   
    }
};
class Bus : public Vehicle, public Horn
{
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