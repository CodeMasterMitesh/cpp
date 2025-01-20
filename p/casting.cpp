#include<iostream>
using namespace std;

class Dummy{
    int a;
public:
    void setA(int x){
        a = x;
    }
    void showA(){
        cout<<"a = "<<a<<endl;
    }

    operator int(){

       return a;
    }

    Dummy(){}
    Dummy(int y){
        a = y;
    }

    int getA(){
        return a;
    }
   
};

class Yummy{
    int b;
public:
    void setB(int x){
        b = x;
    }
    void showB(){
        cout<<"b = "<<b<<endl;
    }
    // Yummy(){}
    // Yummy(Dummy d){
    //     b = d.getA();
    // }

    void operator =(Dummy d){
        b = d.getA();
    }
   
};

int main()
{
    system("cls");
    // int x;
    Dummy d1;
    Yummy y1;
    // d1=x;
    d1.setA(15); 
    d1.showA();
    // x = d1;
    // cout<<"x = "<<x<<endl;
    y1 = d1;
    y1.showB();
    return 0;
}
