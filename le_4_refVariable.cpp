#include <iostream>
using namespace std;

int main()
{
    int x = 10;

    int &y = x;
    y++;
    cout << "y = " << y << endl;
    cout << "x = " << x << endl;
    return 0;
}