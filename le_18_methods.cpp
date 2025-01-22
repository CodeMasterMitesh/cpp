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

    void setGear(int g){
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
    sprtCar c1;
    c1.setGear(2);
    c1.setSpd(45);
    c1.windowOpen(2);
    c1.musicSystem();
    c1.musicSystem("Rahul");
}