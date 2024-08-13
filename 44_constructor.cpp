#include<iostream>
// #include<bit/std c++.h>
using namespace std;

class student{

string name;

public:
    int age;
    bool gender;
    
    //default constructor
    student(){
        cout<<"Default Constructor"<<endl;
    }
    
    //parameterised constructor
    void setName(string s,int a , int g){
        cout<<"Parameterised constructor"<<endl;
        name = s;
        age = a;
        gender = g;
    }
    
    
    // Destructor
    ~student(){
        cout<<"Destructor called"<<endl;
    }
    
    student(student &a){
        cout<<"Copy constructor";
        name = a.name;
        age = a.age;
        gender = a.gender;
    }
    
    void getName(){
        cout<<name<<endl;
    }
    
    void setName(string s){
       name = s;
    }
    
    void printInfo(){
        
        cout<<"Name: ";
        cout<<name<<endl;
        cout<<"Age : ";
        cout<<age<<endl;
        cout<<"Gender : ";
        cout<<gender<<endl;
    
    }
    
    bool operator == (student &a){
        if(name==a.name && age = a.age && gender==a.gender){
            return true;
        }
        return false;
    }
};

int main(){
    
    // student arr[3];
    // for(int i =0; i<3; i++){
    //     cout<<"Name: ";
    //     cin>>arr[i].name;
    //     cout<<"Age: ";
    //     cin>>arr[i].age;
    //     cout<<"Gender: ";
    //     cin>>arr[i].gender;
    // }
    
    // for(int i = 0; i < 3; i++){
    //     arr[i].printInfo();
    // }
    
    student a("Urvi",20,1);
    // a.printInfo();
    a.getName();
    
    student b("Rahul",21,0);
    student c = a;
    
    if(c==a){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not Same"<<endl;
    }
    return 0;
}