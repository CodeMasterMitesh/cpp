#include<iostream>
using namespace std;
inline void f1();
//function prototype
inline int sum(int, int);

// function declaration
int sum(int a, int b){
    return a+b;
}

void f1()
{
    cout << "Hello World";
}
int main()
{
    int a = 10;
    int b = 20;
    f1();
    cout << "\n"<<"sum of a and b is " <<sum(a,b);
    return 0;
}