//Bit manipulation
//Author : Naina Mogha
//Date :22 July 2024
#include<iostream>
using namespace std;

// #1 get bit
int getBit(int n ,int pos){
    return((n & (1<<pos))!= 0);
}
// #2 set bit
int setBit(int n, int pos){
    return( n | (1<<pos));
}
// #3 Clear Bit
int clearBit(int n,int pos){
    int mask = ~(1<<pos);
    return n & mask;
}

// #4 Update bit-->cleaarBit then set bit
int updateBit(int n, int pos, int value){
    int mask = ~(1<<pos);
    n = n & mask;
    return (n | (value<<pos));
}
int main(){
    
    // cout<<getBit(5,2)<<endl;
    // cout<<setBit(5,1)<<endl;
    // cout<<clearBit(5,1)<<endl;
    cout<<updateBit(5,1,1)<<endl;
}

