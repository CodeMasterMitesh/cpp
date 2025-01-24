#include<iostream>
using namespace std;
// method overridding,method hideing,method overloading
class Car{
    int brk,spd,gear;

    public:
    void setBrk(int b){
        brk = b;
        cout<<"Brake set to "<<brk<<endl;
    }

    void setSpd(int s){
        spd = s;
        cout<<"Speed incress to "<<spd<<endl;
    }
    // virtual function
    virtual void setGear(int g){
        gear = g;
        cout<<"Gear set to "<<gear<<endl;
    }

    void windowOpen(){
        cout<<"Window open Manually"<<endl;
    }
    void musicSystem(){
        cout<<"Music system on by manually"<<endl;
    }
    void musicSystem(string s){  // method overloading
        cout<<"Music system on by "<< s <<endl;
    }
    
};

class sprtCar:public Car
{
    int autoGear;
    public:
    void setGear(int x){ // method overridding
        autoGear = x;
        cout<<"Auto gear change to "<<autoGear<<endl;
    }
    void windowOpen(int x){
        cout<<"Window open Automaticly Window no"<<x<<endl;
    }
    
};

main()
{
    system("cls");
    Car *p;// object pointer
    p = new sprtCar; // DMA
    p->setGear(2); // early binding -> late binding
}