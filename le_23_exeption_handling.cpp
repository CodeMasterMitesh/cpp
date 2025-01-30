#include<iostream>
using namespace std;
int main(){
    system("cls");
    try{
        int no,fact=1;
        string errors;
        cout<<"Enter the number to find the factorial: ";
        cin>>no;

        if(no<0){
            throw errors = "Negative number is not allowed";;
        }
        if(no>10){
            throw errors = "Number is too big";
        }
        if(no == 0){
            throw 0;
        }
        while (no>0)
        {
        fact=fact*no;
        no--; 
        }
        cout<<"Factorial is = "<<fact<<endl;
    }
    // catch(string error){
    //     cout<<error<<endl;
    // }catch(int e){
    //     cout<<"Factorial "<<e<<" Is not Allowed"<<endl;
    // }

    catch(...){
        cout<<"Something Wrong"<<endl;
    }
    

    return 0;
}