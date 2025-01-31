#include<iostream>
#include<vector>

using namespace std;

int main()
{
    // int marks[10];
    vector <int> marks;
    int no,mark;
    cout<<"Enter no of Students ";
    cin>>no;

    for (int i = 0; i < no; i++)
    {
        cout<<"Enter Student Marks :";
        cin>>mark;
        marks.push_back(mark);
    }

    cout<<"Students Marks\n";

    for (int i = 0; i < no; i++)
    {
        cout<<marks[i]<<endl;
    }
    
    return 0;
}