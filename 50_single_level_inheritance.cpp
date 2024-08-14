#include<iostream>
using namespace std;

// Single Level Inheritance
class A{
    public:
    void func(){
        cout<<"Inheritance\n";
    }
};

class B: public A{
    

};


int main(){
    B b;
    b.func();

}