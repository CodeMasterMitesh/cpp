// object pointer and this pointer/ this keyword
#include <iostream>
using namespace std;

class Box{
    int l,b,h; // static member variable // declare 
public:
    void setDimention(int l,int b, int h)
    {
       this-> l = l;
       this-> b = b;
       this-> h = h;
    }
    void showDimention(){
        cout<<"Length="<<l<<" Breadth="<<b<<" Height="<<h<<endl;
    }

};
int main()
{
    system("cls");
    Box b1;
    Box *p = &b1; // object pointer
    p->setDimention(15,25,30);
    p->showDimention();
    return 0;
}