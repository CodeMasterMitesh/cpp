#include<iostream>
using namespace std;
template <class J>
class Example{
    J a,b;
    float c,d;
    public:
   void setData(J x, J y){
        a=x;
        b=y;
    }
    void showData(){
        cout<<"a = "<<a<<" b = "<<b<<endl;
    }

};

int main(){
    system("cls");
    Example <int> e1,e4;
    Example <float> e2;
    Example <string> e3;
    e1.setData(10, 20);
    e1.showData();
    e2.setData(10.5, 20.5);
    e2.showData();
    e3.setData("James ", "Bond");
    e3.showData();
    e4.setData(25, 50);
    e4.showData();
    return 0;
}