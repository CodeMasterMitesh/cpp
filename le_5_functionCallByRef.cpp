#include <iostream>
using namespace std;
// functio prototyepe
int sum(int , int);

// function definition
int sum(int a, int b)
{
    return a + b;
}

// functio prototyepe
int sub(int *, int *);

// function definition
int sub(int *a, int *b)
{
    return *a - *b;
}

// functio prototyepe
int mul(int &, int &);

// function definition
int mul(int &a, int &b)
{
    return a * b;
}


int main()
{
    int a = 20, b = 10;
    cout<<"sum = "<<sum(a, b)<<endl;// function call by value
    cout<<"sub = "<<sub(&a, &b)<<endl;// function call by address
    cout<<"mul = "<<mul(a, b)<<endl; // function call by refrence
    return 0;   
}