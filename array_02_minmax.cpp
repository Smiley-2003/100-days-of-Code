// You are using GCC
// Q2_Print maximum and minimum value of an array
// Date: 19 June 2024
// Author: Naina Mogha
#include<iostream>
#include<climits>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    
    for(int i=0; i<n;i++){
      maxNo=max(maxNo,arr[i]);
      minNo=min(minNo,arr[i]);
    }
    cout<<maxNo<<" "<<minNo<<endl;
    
    // for(int i=0; i<n; i++){
    //     if(arr[i] > maxNo){
    //         maxNo = arr[i];
    //     }
    //     if(arr[i] < minNo){
    //         minNo = arr[i];
    //     }
    // }
    
}
