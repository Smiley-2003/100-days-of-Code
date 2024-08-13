#include<bits/stdc++.h>
using namespace std;

// function overloading

class College
{
public:
     void fun(){
         cout<<"I am a function with no arguments"<<endl;
     }
     
     void fun(int x){
         cout<<"I am function with int argument"<<endl;
     }
     
     void fun(double x){
         cout<<"I am a function with double arguments"<<endl;
     }
    
};

int main(){
    
    College obj;
    obj.fun();
    obj.fun(4);
    obj.fun(6.2);
    
    
}