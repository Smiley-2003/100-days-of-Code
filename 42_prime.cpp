//Functions Question
//Print all the prime numbers between  2 given numbers
//Author: Naina Mogha
//Date: 18 July 2024
#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int num){
    for(int i = 2; i<= sqrt(num);i++){
        if(num%2==0){
            return false;
        }
    }
    return true;
}

int main(){
    int a,b;
    cin>>a>>b;
    
    for(int i = a; i <= b;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
    
}