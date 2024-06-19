// You are using GCC
// C++ Program to Add Two numbers
// Name: Naina Mogha
// Date: 20 June 2024
#include<iostream>
using namespace std;

int main(){
    
        int divisor,dividend,quotient,remainder;
        
        cout<<"\nEnter dividend: ";
        cin>>dividend;
        
        
        cout<<"\nEnter divisor: ";
        cin>>divisor;
        
        
        quotient = dividend/divisor;
        remainder = dividend %divisor;
        
        
        cout<<"\nQuotient = "<<quotient<<endl;
        cout<<"Remainder = "<<remainder<<endl;
        
        
   
        return 0;
}