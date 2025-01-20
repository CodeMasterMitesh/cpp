// static variable and static function in class
#include <iostream>
using namespace std;

class Box{
    int l,b,h;  // instance member variable / properties
   static float price; // static member variable // declare 
public:
    void setDimention(int x,int y, int z)
    {
        l = x;
        b = y;
        h = z;
    }
    void showDimention(){
        cout<<"Length="<<l<<" Breadth="<<b<<" Height="<<h<<endl;
    }
  friend void f1(Box);
};
void f1(Box B){
    cout<<"Length="<<B.l<<" Breadth="<<B.b<<" Height="<<B.h<<endl;
}

class miniBox :public Box{
    public:
    miniBox()
    {
        cout<<"I am MiniBox\n";
    }
};
int main()
{
    system("cls");
    Box b1;
    b1.setDimention(10,11,12);
    f1(b1);
    miniBox m1;
    return 0;
}