#include<iostream>
using namespace std;

class Temp{
    int a,b;

    public:
    void setData(int x, int y){
        a = x;
        b = y;
    }

    void showData(){
        cout<<"a = "<<a<<" b = "<<b<<endl;
    }
    Temp()
    {
        cout<<"This is Default constructor of Temp"<<endl;
    }
    Temp(int x, int y) // Parameterized constructor
    {
        a = x;
        b = y;
        cout<<"a = "<<a<<" b = "<<b<<endl;
    }
    ~Temp()
    {
        cout<<"This is Default destructor of Temp"<<endl;
    }
};

class Jemp : public Temp
{
    public:
    Jemp(){}
    Jemp(int x,int y):Temp(x,y)
    {
        cout<<"This is Default constructor of Jemp"<<endl;
    }
    ~Jemp(){
        cout<<"This is Default destructor of Jemp"<<endl;
    }
};

main()
{
    system("cls");
    Jemp j1(3,4),j2;
    // j1.setData(3,4);
    // j1.showData();
}