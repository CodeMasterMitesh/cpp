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

    friend istream& operator >>(istream&,Complex&);
    friend ostream& operator <<(ostream&,Complex&);
   
};
istream& operator >>(istream &din,Complex &d){
    din>>d.a>>d.b;
}

ostream& operator <<(ostream &dout,Complex &d){
    dout<<"A= "<<d.a <<"B ="<<d.b<<endl;
}
int main()
{
    system("cls");
    Complex c1,c2,c3; // object
    cout<<"Enter Value For Object : ";
    cin>>c1>>c2;
    cout<<c1<<c2;
    // c1.setData(15,18); // c1 is caller object
    // c1.showData();
    return 0;
}

