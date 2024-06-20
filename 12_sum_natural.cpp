// Sum of Natural Numbers using Loop
// Author: Naina Mogha
// Date: 20 June 2024
#include<iostream>
using namespace std;

int main(){
    int n,sum = 0;
    
    cout<<"Enter a positive integer: ";
    cin>>n;
    
    for(int i = 0 ; i <= n; i++){
        sum += i;
    }
    
    cout<<"\nSum = "<<sum;
    return 0;
}