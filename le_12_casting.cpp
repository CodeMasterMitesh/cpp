#include<iostream>
// 1) int to class
// 2) class to int
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
    // Dummy(){}
    // Dummy(int y)
    // {
    //     a = y;
    // }

    operator int()
    {
        return a;
    }
};
int main()
{
    system("cls");
//    int x = 10;
      int z;
   Dummy d1;
   //d1 = x;  // castint int to class using constructor d1(x)
   d1.setA(12);
   d1.showA();
   z = d1;  // casting class to int using operators
   cout<<"Z = "<<z<<endl;
//    float y = 10.25;
//    x = y;  // auto casting
//    cout<<"x = "<<x<<endl;
}
