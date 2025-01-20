#include <iostream>
using namespace std;
// function prototype
int sum(int = 0,int = 0,int = 0); // default value

// function define
int sum(int x,int y,int z) // function parameters // formal arguments
{
    return x + y + z;
}

//function prototype
int mult(int = 1,int = 1,int = 1); // default value

// function define 
int mult(int x,int y,int z) // function parameters // formal arguments
{
    return x * y * z;
    // example 
    // 9 * 3 * 1 = 27
    // 9 * 1 * 1 = 9
    // 2 * 3 * 4 =  24 
    // no argument when function call
    // 1 * 1 * 1 = 1
}

int main()
{
    system("CLS");
    // function call 
    cout << "Sum1 = " << sum() << endl;
    cout << "Sum2 = " << sum(15) << endl;
    cout << "Sum2 = " << sum(15,20) << endl; // when we call function -> actual argumnets
    cout << "Sum3 = " << sum(15,20,30) << endl;


    cout << "Mult = " << mult(2,3,4) << endl;
    return 0;
}