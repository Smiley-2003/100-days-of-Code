#include<bits/stdc++.h>
using namespace std;

int sortArr(vector<int>& arr){
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}

int main(){
    vector<int> arr1 = {2,5,1,3,0};
    vector<int> arr2 = {8,10,5,7,9};
    
    cout<<"The Largest element in the array is: "<<sortArr(arr1)<<endl;
    cout<<"The Largest element in the array is: "<<sortArr(arr2)<<endl;
    
    return 0;
}