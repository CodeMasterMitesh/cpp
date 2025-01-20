#include<iostream>
using namespace std;

class Complex{
    int a,b; // instance member variable
public:
    void setData(int x, int y){
        a = x;
        b = y;
    }
    void showData(){
        cout<<"a = "<<a<<" b = "<<b<<endl;
    }

    Complex add(Complex e){
        Complex T;
       T.a =  a + e.a;
       T.b =  b + e.b;

       return T;
    }
   
};

int main()
{
    system("cls");
    Complex c1,c2,c3; // object
    c1.setData(15,18); // c1 is caller object
    c1.showData();

    c2.setData(13,14);   //c2 is caller object
    c2.showData();

    c3 = c1.add(c2);
    // c1 is caller object and function and it is take c2 as an argument 
    //and whatever add function will return it will assigned into c3
    c3.showData();
    return 0;
}

