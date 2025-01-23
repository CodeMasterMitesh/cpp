// dynamic memory allocation and static memory allocation
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
    Box(){
        cout<<"Object Created"<<endl;
    }
    ~Box(){
        cout<<"Object Destroyed"<<endl;
    }

};
int main()
{
    system("cls");
    Box *p;
    p = new Box; // dynamic memory allocation
    p->setDimention(10,20,30);
    p->showDimention();
    delete p; // delete the memory
    return 0;
}