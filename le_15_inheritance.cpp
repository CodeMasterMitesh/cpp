#include<iostream>

using namespace std;

class Car{  // parent class or base class  or super class
    int a,b,c;

    public:
    void spd(){
        cout<<"Speed Increased\n";
    }
    void brk(){
        cout<<"Break Applied and Speed Decrease\n";
    }
};

class sprtCar :public Car  // child class or derived class or sub class
{

};

main()
{
    sprtCar s1;
    s1.spd();
    s1.brk();
}