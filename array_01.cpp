// You are using GCC'
// Input array and print the array.

#include<iostream>
using namespace std;


int main(){
    
    //Input the number of elements
    int n;
    cin>>n;
    
    // input the array
    int array[n];
    
    // take array as input
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    
    // print out array
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    
    return 0;
}