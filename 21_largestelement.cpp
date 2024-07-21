//Longest element in an array
//Author: Naina Mogha
// Date : 21 July 2024

#include<bits/stdc++.h>
using namespace std;

int LargestElement(int arr[], int n){
    int largest = arr[0];
    for(int i=0; i< n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;

}
int main(){
    int arr1[]={2,5,1,3,0};
    int n = 5;
    int largest =LargestElement(arr1, n);
    cout<<"The largest element in the array is :"<<largest<<endl;
    
    int arr2[]={8,10,5,7,9};
    n = 5;
    largest = LargestElement(arr1, n);
    cout<<"The largest element in the array is :"<<largest<<endl;
    
    
}