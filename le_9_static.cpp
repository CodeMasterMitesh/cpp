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

    static void showPrice(){  // static function
        cout<<"Price = "<<price;
    }

    static void changeValue(float p){
        price = p;
    }
};
float Box::price; // define
int main()
{
    system("cls");
    // Box b1;
    // b1.setDimention(15,25,30);
    // b1.showDimention();
    // Box::price = 200;
    // cout<<"Enter Price";
    // cin>>Box::price;
    // cout<<"Price="<<Box::price;
    Box::showPrice();
    Box::changeValue(150.25);
    Box::showPrice();
    return 0;
}