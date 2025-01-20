#include <iostream>
using namespace std;
class Student{

    int roll_no;
    string name;
    string branch; 
public:
void information(){ 
        
        cout<<"Enter Roll NO, Name,Branch: "<<endl;
        cin>>roll_no;
        cin>>name;
        cin>>branch;
    }
void display();
};
// membership tag/label => Book:: -> scope resolution operator
void Student::display(){
    cout<<"Book ID : "<<roll_no<<endl;
    cout<<"Book Title : "<<name<<endl;
    cout<<"Book Author : "<<branch<<endl;
}
int main(){
    system("cls");
    Student s1,s2; 
    s1.information();
    s1.display();

    s2.information(); 
    s2.display();
    
    return 0;
}

