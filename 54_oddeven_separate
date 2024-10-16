#include<bits/stdc++.h>
using namespace std;

void sortOddEven(vector<int>& nums){
    vector<int>odd,even;
    
    //separate odd and even numbers
    for(int i= 0; i< nums.size();i++){
        if(nums[i] % 2 == 0)
          even.push_back(nums[i]);
        else
          odd.push_back(nums[i]);
    }
    
    //sort odd numbers in non-increasing order
    sort(odd.begin(),odd.end(),greater<int>());
    
    //sort even numbers in non-decreasing order
    sort(even.begin(),even.end());
    
    //Place odd numbers in the first half of the original array
    for(int i = 0; i< odd.size();i++){
        nums[i] = odd[i];
    }
    //place even numbers in the second half of the original array
    for(int i = 0; i< even.size();i++){
        nums[odd.size() + i] = even[i];
    }
}
int main(){
    int N;
    cin>>N;
    
    vector<int>nums(N);
    for(int i = 0; i < N; i++){
        cin>>nums[i];
    }
    
    sortOddEven(nums);
    
    //Output the sorted array
    for(int i = 0; i<N;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    
    return 0;
} 
