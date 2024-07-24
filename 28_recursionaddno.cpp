//Add all numbers till n
//Author: Naina Mogha
//Date : 24 July 2024

#include<iostream>
using namespace std;

int Sum(int n){
    
    if(n==0)
    {
        return 0;
    }
    
    // int prevSum = Sum(n-1);
    return n + Sum(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<Sum(n)<<endl;
}