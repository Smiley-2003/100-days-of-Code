#include<bits/stdc++.h>
using namespace std;

class base
{
public:
    void print(){
        cout<<"this is the base class's print fucntion"<<endl;
    }
    
    void display(){
        cout<<"this is the base class's display function"<<endl;   
    }
};

class derived: public base
{
public:
    void print(){
    cout<<"this is the derived class's print fucntion"<<endl;
    }
    
    void display(){
        cout<<"this is the base class's display function"<<endl;
    }
};

int main(){
    
    base *baseptr;
    derived d;
    baseptr = &d;
    
    baseptr -> print();
    
    baseptr ->display();
    
    return 0;
}
