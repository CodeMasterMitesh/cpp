#include<iostream>
using namespace std;
// int big(int x, int y){
//    if(x>y){
//        return x;
//    }else{
//        return y;
//    }
// }
// float big(float x, float y){
//    if(x>y){
//        return x;
//    }else{
//        return y;
//    }
// }

// char big(char x, char y){
//    if(x>y){
//        return x;
//    }else{
//        return y;
//    }
// }
template <class T>
T big(T x, T y){
   if(x>y){
       return x;
   }else{
       return y;
   }
}
int main(){
    system("cls");
    cout<<"Big No is = "<<big(10, 20)<<endl;
    cout<<"Big No is in float = "<<big(10.5, 10.7)<<endl;
    cout<<"Big No in char = "<<big('*', '?')<<endl;
    return 0;
}