#include <iostream>
using namespace std;
// structure definition -> struct keyword -> 
//structure means a collection of variables of different data types
struct Book{

private:
    int book_id;
    string title;
    string author;
    float price;
public:
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

void Book::display(){
    cout<<"Book ID : "<<book_id<<endl;
    cout<<"Book Title : "<<title<<endl;
    cout<<"Book Author : "<<author<<endl;
    cout<<"Book Price : "<<price<<endl;
}
int main(){
    // diff 1 struct key word is optional in c++
    Book b1,b2,b3;
    b1.input();
    b1.display();
    // b1.book_id = 101;
    // b1.title = "C++ Programming";
    // b1.author = "Bjarne Stroustrup";
    // b1.price = 500.50;


    b2.input();
    b2.display();

    b3.input();
    b3.display();
    
    return 0;
}

