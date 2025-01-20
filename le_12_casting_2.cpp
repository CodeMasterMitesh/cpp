#include<iostream>
// 3) class to class
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

    int getA()
    {
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
    // Yummy(Dummy d)
    // {
    //     b = d.getA();
    // }

    void operator =(Dummy d){
         b = d.getA();
    }
    
};
main()
{
  system("cls");
   Dummy d1;
   Yummy y1;
   d1.setA(12);
   d1.showA();

   y1 = d1; // y1.operator=(d1)  y1 is caller object ans as argument take d1
   y1.showB();
}
