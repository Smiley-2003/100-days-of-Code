//Sum of n natural numbers
//Author: Naina Mogha
//Functions questions

#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
    int ans = 0;
    for(int i = 1; i<= n; i++)
            ans+=i;
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
}