#include <iostream>
using namespace std;
// premitive datatypes -> int,float,char,double,void

// Non-premitive datatype 
class Book{

    int book_id; // insatance member variables  -> properties,attributes,fields,data members,instance variables
    string title; // insatance member variables
    string author; //insatance member variables
    float price; // insatance member variables
public:
// insatance member function -> methods,member functions,behaviours,actions,
void input(){ 
        
        cout<<"Enter Book ID,Book Title,Book Author,Book Price: "<<endl;
        cin>>book_id;
        cin>>title;
        cin>>author;
        cin>>price;

        if(price<0){
            price=-price;
        }
    }
void display();
};
// membership tag/label => Book:: -> scope resolution operator
void Book::display(){
    cout<<"Book ID : "<<book_id<<endl;
    cout<<"Book Title : "<<title<<endl;
    cout<<"Book Author : "<<author<<endl;
    cout<<"Book Price : "<<price<<endl;
}
int main(){
    system("cls");
    Book b1,b2,b3; // object -> object is real life entity  / instance of class
    b1.input(); // b1 is a object variable
    b1.display();

    b2.input(); // b2 is a object variable
    b2.display();

    b3.input();// b2 is a object variable
    b3.display();// b2 is a object variable
    
    return 0;
}

