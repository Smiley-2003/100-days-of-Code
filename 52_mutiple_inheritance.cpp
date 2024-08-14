#include<iostream>
using namespace std;

// Multiple Inheritance
class A{
    public:
    void Afunc(){
        cout<<"Func A\n";
    }
};

class B{
    public:
    void Bfunc(){
        cout<<"Func B\n";
    }
};

class C : public A,public B{
    public:
};

int main(){
    C c;
    c.Afunc();
    c.Bfunc();

}