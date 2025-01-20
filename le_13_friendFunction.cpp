
#include <iostream>
using namespace std;

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

    friend void f1();

};

// non member function 
void f1(){
    Box B;
    B.setDimention(11,12,13);
    B.showDimention();
    // cout<<"Total ="<<B.l+B.b+B.h;
}

int main()
{
    system("cls");
    // Box b1;
    // b1.setDimention(10,11,12);
    // b1.showDimention();
    f1();
    return 0;
}