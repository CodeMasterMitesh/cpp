
#include <iostream>
using namespace std;
class LunchBox;  // forward declaration
class Box{
    int l,b,h;  // instance member variable / properties
public:
    void setDimention(int x,int y, int z) // instance member function
    {
        l = x;
        b = y;
        h = z;
    }
    void showDimention(){
        cout<<"Length="<<l<<" Breadth="<<b<<" Height="<<h<<endl;
    }

    friend void f1(Box,LunchBox);

};

class LunchBox{
    int a,b,c; 
public:
    void setDimention(int x,int y, int z) // instance member function
    {
        a = x;
        b = y;
        c = z;
    }
    void showDimention(){
        cout<<"A="<<a<<" B="<<b<<" C="<<c<<endl;
    }

    friend void f1(Box,LunchBox);

};

// non member function 
void f1(Box B,LunchBox T){
    // Box B;
    // B.setDimention(11,12,13);
    // B.showDimention();
    cout<<"Total ="<<B.l+B.b+B.h+T.a+T.b+T.c;
}

int main()
{
    system("cls");
    Box b1;
    b1.setDimention(10,11,12);
    b1.showDimention();
    LunchBox l1;
    l1.setDimention(1,2,3);
    l1.showDimention();
    f1(b1,l1);
    // f1();
    return 0;
}