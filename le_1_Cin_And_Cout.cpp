// #include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    float a;
    float b;

    cout << "Enter Value of a and b :";  //<< this is called insertion operator
    //cin >> a; // >> this is called extraction operator
    //cout << "Enter Value of b :"; 
    //cin >> b;
    cin >> a >> b;
    cout << "a = "<< a << " b =" << " " << b << " sum of a and b is "<< a +b;

    // printf("Enter Value of a: ");
    // scanf("%d", &a);
    // printf("Enter Value of b: ");
    // scanf("%d", &b);

    // printf("Sum of a and b is: %d", a+b);
    // printf("a = %d and b = %d and sum of a and b is %d",a,b,a+b);
    // a = 10 and b = 20 and sum of and b is 30
    // printf("Hello World");

    return 0;
}