#include<iostream>
using namespace std;

// Multi Level Inheritance
class A{
    public:
    void Afunc(){
        cout<<"Func A\n";
    }
};

class B: public A{
    public:
    void Bfunc(){
        cout<<"Func B\n";
    }
};

class C : public B{
    public:
};

int main(){
    C c;
    c.Afunc();
    c.Bfunc();

}