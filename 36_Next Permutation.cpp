
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int arr[]={1,2,3};
    
    next_permutation(arr,arr+3);
    //using in built function
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    
    return 0;
}