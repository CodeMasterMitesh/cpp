#include <iostream>
using namespace std;

class Box{
    int l,b,h;  // instance member variable / properties
public:
    void setDimention(int x,int y, int z)
    {
        l = x;
        b = y;
        h = z;
    }
    void showDimention(){
        // cout<<"This is Show Dimention Function\n";
        cout<<"Length="<<l<<" Breadth="<<b<<" Height="<<h<<endl;
    }
    // }
    Box(int x = 0, int y = 0, int z = 0){
        l = x;
        b = y;
        h = z;
        cout<<"Length="<<l<<" Breadth="<<b<<" Height="<<h<<endl;
    }
    /// copy constructor 

    Box(Box &a)
    {
        cout<<"This is copy constructor\n";
        l = a.l;
        b = a.b;
        h = a.h;
        cout<<"Length="<<l<<" Breadth="<<b<<" Height="<<h<<endl;
    }

    ~Box(){
        cout<<"This is destructor\n";
    }

};
void f1()
{
    Box a;
}
int main()
{
    system("cls");
    //Box b1(10,20,30); // object real life entity
    // b1.showDimention();
    f1();
    return 0;
}