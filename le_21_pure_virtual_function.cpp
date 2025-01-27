#include<iostream>
using namespace std;
// abstract class
class Person{
    string name;
    int age;
    float height;
    public:

    void setName(string n){
        name = n;
    }

    void setAge(int a){
        age = a;
    }

    void setHeight(float h){
        height = h;
    }

    string getName(){
        return name;
    }

    int getAge(){
        return age;
    }

    float getHeight(){
        return height;
    }
    // pure virtual function
    // abstract class
   virtual void f1()=0; // null function
};
// pure virtual function
class Student:public Person{
   void f1(){
    cout<<"Student class f1() function"<<endl;
   }
};

int main(){
    system("cls");
    Person *p;
    p = new Student;
    p->f1();
    // Person p;
    // p.setName("Sanket");
    // p.setAge(21);
    // p.setHeight(5.5);
    // cout<<"Name: "<<p.getName()<<endl;
    // cout<<"Age: "<<p.getAge()<<endl;
    // cout<<"Height: "<<p.getHeight()<<endl;
    return 0;
}