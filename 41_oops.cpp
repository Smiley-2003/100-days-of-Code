#include<iostream>
// #include<bit/std c++.h>
using namespace std;

class student{
    
public:
    string name;
    int age;
    bool gender;
    
    void printInfo(){
        
        cout<<"Name: ";
        cout<<name<<endl;
        cout<<"Age : ";
        cout<<age<<endl;
        cout<<"Gender : ";
        cout<<gender<<endl;
    
    }
};

int main(){
    
    student arr[3];
    for(int i =0; i<3; i++){
        cout<<"Name: ";
        cin>>arr[i].name;
        cout<<"Age: ";
        cin>>arr[i].age;
        cout<<"Gender: ";
        cin>>arr[i].gender;
    }
    
    for(int i = 0; i < 3; i++){
        arr[i].printInfo();
    }
    return 0;
}