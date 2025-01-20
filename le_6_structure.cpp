#include <iostream>
using namespace std;
// premitive datatypes -> int,float,char,double,void

// Non-premitive datatype 
// structure definition -> struct keyword -> 
//structure means a collection of variables of different data types
struct Book{

private:
    int book_id; // member variables
    string title; // member variables
    string author; // member variables
    float price; // member variables
public:
// member function
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
    // diff 1 struct key word is optional in c++
    Book b1,b2,b3;
    b1.input(); // b1 is a caller variable for input function
    b1.display();

    b2.input(); // b2 is a caller variable for input function
    b2.display();

    b3.input();// b3 is a caller variable for input function
    b3.display();//b3 is a caller variable for display function
    
    return 0;
}

